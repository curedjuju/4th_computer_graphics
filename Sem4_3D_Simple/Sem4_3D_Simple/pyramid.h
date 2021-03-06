#ifndef PYRAMID_H
#define PYRAMID_H

#include <QVector>
#include <QVector3D>
#include <QVector2D>
#include <QGenericMatrix>>
#include <math.h>

const int V_COUNT = 4;

class Pyramid
{
public:
    Pyramid(QVector<QVector3D> v);
public:
    void rotateX(double alpha);
    void rotateY(double alpha);
    void rotateZ(double alpha);
    void rotate(double phiX, double phiY, double phiZ);
    void scale(double aX, double bY, double cZ);
    void translate(double dx, double dy, double dz);
    QVector<QVector3D> figure3D();
    QVector<QVector2D> parallelProject();
private:
    QVector<QVector3D> figure;
    QGenericMatrix<V_COUNT, 3, qreal> matrix;
private:
    QGenericMatrix<3, 3, qreal> rotationXMatrix(double phi);
    QGenericMatrix<3, 3, qreal> rotationYMatrix(double phi);
    QGenericMatrix<3, 3, qreal> rotationZMatrix(double phi);
    QGenericMatrix<3, 3, qreal> scaleMatrix(double a, double b, double c);
    QGenericMatrix<4, 4, qreal> translationMatrix(double dx, double dy, double dz);
    QGenericMatrix<3, 3, qreal> parallelProjectionMatrix();
};

#endif // PYRAMID_H
