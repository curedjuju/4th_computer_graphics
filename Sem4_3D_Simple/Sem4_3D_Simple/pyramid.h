#ifndef PYRAMID_H
#define PYRAMID_H

#include <QVector>
#include <QVector3D>
#include <QVector2D>
#include <QGenericMatrix>>

const int V_COUNT = 4;

class Pyramid
{
public:
    Pyramid(QVector<QVector3D> v);
public:
    void rotateX(double alpha);
    void rotateY(double alpha);
    void rotateZ(double alpha);
    QVector<QVector3D> figure3D();
    QVector<QVector2D> parallelProject();
private:
    QVector<QVector3D> figure;
    QGenericMatrix<V_COUNT, 3, qreal> matrix;
private:
    QGenericMatrix<3, 3, qreal> parallelProjectionMatrix();
};

#endif // PYRAMID_H
