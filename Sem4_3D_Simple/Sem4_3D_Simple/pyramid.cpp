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

}

void Pyramid::rotateY(double alpha){

}

void Pyramid::rotateZ(double alpha){

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
