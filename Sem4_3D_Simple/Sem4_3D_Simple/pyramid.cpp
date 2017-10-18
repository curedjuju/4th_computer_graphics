#include "pyramid.h"

Pyramid::Pyramid(QVector<QVector3D> v)
{
    matrix = QGenericMatrix<V_COUNT, 3, qreal>();
    for(int i = 0; i < V_COUNT; i++){
        matrix(0, i) = v.at(i).x();
        matrix(1, i) = v.at(i).y();
        matrix(2, i) = v.at(i).z();
    }
}

void Pyramid::rotateX(double alpha){
    matrix = rotationXMatrix(alpha) * matrix;
}

void Pyramid::rotateY(double alpha){
    matrix = rotationYMatrix(alpha) * matrix;
}

void Pyramid::rotateZ(double alpha){
    matrix = rotationZMatrix(alpha) * matrix;
}

void Pyramid::rotate(double aX, double aY, double aZ){
    rotateX(aX);
    rotateY(aY);
    rotateZ(aZ);
}

void Pyramid::scale(double a, double b, double c){
    matrix = scaleMatrix(a, b, c) * matrix;
}

void Pyramid::translate(double dx, double dy, double dz){
    QGenericMatrix<4, 4, qreal> m4;
    for(int i = 0; i < V_COUNT; i++){
        m4(0, i) = matrix(0, i);
        m4(1, i) = matrix(1, i);
        m4(2, i) = matrix(2, i);
        m4(3, i) = 1;
    }
    m4 = translationMatrix(dx, dy, dz).transposed() * m4;
    for(int i = 0; i < V_COUNT; i++){
        matrix(0, i) = m4(0, i);
        matrix(1, i) = m4(1, i);
        matrix(2, i) = m4(2, i);
    }
}

QGenericMatrix<3, 3, qreal> Pyramid::scaleMatrix(double a, double b, double c){
    QGenericMatrix<3, 3, qreal> projMatrix;
    //first row x
    projMatrix(0, 0) = a;
    projMatrix(1, 0) = 0;
    projMatrix(2, 0) = 0;
    //second row y
    projMatrix(0, 1) = 0;
    projMatrix(1, 1) = b;
    projMatrix(2, 1) = 0;
    //third row z - drop
    projMatrix(0, 2) = 0;
    projMatrix(1, 2) = 0;
    projMatrix(2, 2) = c;
    return projMatrix;
}

QGenericMatrix<4, 4, qreal> Pyramid::translationMatrix(double dx, double dy, double dz){
    QGenericMatrix<4, 4, qreal> projMatrix;
    //first row x
    projMatrix(0, 0) = 1;
    projMatrix(1, 0) = 0;
    projMatrix(2, 0) = 0;
    projMatrix(3, 0) = dx;
    //second row y
    projMatrix(0, 1) = 0;
    projMatrix(1, 1) = 1;
    projMatrix(2, 1) = 0;
    projMatrix(3, 1) = dy;
    //third row z - drop
    projMatrix(0, 2) = 0;
    projMatrix(1, 2) = 0;
    projMatrix(2, 2) = 1;
    projMatrix(3, 2) = dz;
    //
    projMatrix(0, 3) = 0;
    projMatrix(1, 3) = 0;
    projMatrix(2, 3) = 0;
    projMatrix(3, 3) = 1;
    return projMatrix;
}

QVector<QVector2D> Pyramid::parallelProject(){
    QGenericMatrix<3, 3, qreal> proj = parallelProjectionMatrix();
    QGenericMatrix<4, 3, qreal> projectedFigure = proj * matrix;
    QVector<QVector2D> projectedVs;
    for(int i = 0; i < V_COUNT; i++){
        QVector2D v2d(projectedFigure(0, i), projectedFigure(1, i));
        projectedVs.append(v2d);
    }
    return projectedVs;
}

QVector<QVector3D> Pyramid::figure3D(){
    return this->figure;
}

QGenericMatrix<3, 3, qreal> Pyramid::rotationXMatrix(double phi){
    QGenericMatrix<3, 3, qreal> projMatrix;
    //first row x
    projMatrix(0, 0) = 1;
    projMatrix(1, 0) = 0;
    projMatrix(2, 0) = 0;
    //second row y
    projMatrix(0, 1) = 0;
    projMatrix(1, 1) = cos(phi);
    projMatrix(2, 1) = -sin(phi);
    //third row z - drop
    projMatrix(0, 2) = 0;
    projMatrix(1, 2) = sin(phi);
    projMatrix(2, 2) = cos(phi);
    return projMatrix;
}

QGenericMatrix<3, 3, qreal> Pyramid::rotationYMatrix(double phi){
    QGenericMatrix<3, 3, qreal> projMatrix;
    //first row x
    projMatrix(0, 0) = cos(phi);
    projMatrix(1, 0) = 0;
    projMatrix(2, 0) = sin(phi);
    //second row y
    projMatrix(0, 1) = 0;
    projMatrix(1, 1) = 1;
    projMatrix(2, 1) = 0;
    //third row z - drop
    projMatrix(0, 2) = -sin(phi);
    projMatrix(1, 2) = 0;
    projMatrix(2, 2) = cos(phi);
    return projMatrix;
}

QGenericMatrix<3, 3, qreal> Pyramid::rotationZMatrix(double phi){
    QGenericMatrix<3, 3, qreal> projMatrix;
    //first row x
    projMatrix(0, 0) = cos(phi);
    projMatrix(1, 0) = -sin(phi);
    projMatrix(2, 0) = 0;
    //second row y
    projMatrix(0, 1) = sin(phi);
    projMatrix(1, 1) = cos(phi);
    projMatrix(2, 1) = 0;
    //third row z - drop
    projMatrix(0, 2) = 0;
    projMatrix(1, 2) = 0;
    projMatrix(2, 2) = 1;
    return projMatrix;
}

QGenericMatrix<3, 3, qreal> Pyramid::parallelProjectionMatrix(){
    QGenericMatrix<3, 3, qreal> projMatrix;
    //first row x
    projMatrix(0, 0) = 1;
    projMatrix(1, 0) = 0;
    projMatrix(2, 0) = 0;
    //second row y
    projMatrix(0, 1) = 0;
    projMatrix(1, 1) = 1;
    projMatrix(2, 1) = 0;
    //third row z - drop
    projMatrix(0, 2) = 0;
    projMatrix(1, 2) = 0;
    projMatrix(2, 2) = 0;
    return projMatrix;
}
