#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar->setNativeMenuBar(false);
    this->scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    createActions();
}

void MainWindow::createActions(){
    pSignalMapper = new QSignalMapper(this);
    connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(aboutMenuItemClicked()));
    connect(ui->paintBtn, SIGNAL(clicked(bool)), this, SLOT(paintBtnClicked()));
}

void MainWindow::aboutMenuItemClicked(){
    qDebug() << QString("aboutMenuItem clicked");
    QMessageBox msgBox;
    msgBox.setText("<p>Разработка: Ярных Роман, студент БПИ141</p>"
                   "<p>Реализация проецирования 3D фигур на плоскость</p>");
    msgBox.exec();
}

void MainWindow::paintBtnClicked(){
    this->scene->clear();
    QPen pen(Qt::green);
    QPen vPen(Qt::black);
    QVector<QVector3D> v;
    //1 v high
    v.push_back(QVector3D(ui->x1->text().toDouble(), ui->y1->text().toDouble(), ui->z1->text().toDouble()));
    //2 v
    v.push_back(QVector3D(ui->x2->text().toDouble(), ui->y2->text().toDouble(), ui->z2->text().toDouble()));
    //3 v
    v.push_back(QVector3D(ui->x3->text().toDouble(), ui->y3->text().toDouble(), ui->z3->text().toDouble()));
    //4 v
    v.push_back(QVector3D(ui->x4->text().toDouble(), ui->y4->text().toDouble(), ui->z4->text().toDouble()));
    QVector2D c(ui->graphicsView->width() / 2, ui->graphicsView->height() / 2);
    //X axes
    this->scene->addLine(0, ui->graphicsView->height() / 2, ui->graphicsView->width(), ui->graphicsView->height() / 2, pen);
    //Y axex
    this->scene->addLine(ui->graphicsView->width() / 2, 0, ui->graphicsView->width() / 2, ui->graphicsView->height(), pen);

    Pyramid pyramid(v);
    double aX = ui->rotateX->value() / 200.0 * 3.1459;
    double aY = ui->rotateY->value() / 200.0 * 3.1459;
    double aZ = ui->rotateZ->value() / 200.0 * 3.1459;
    double sX = ui->scaleX->value();
    double sY = ui->scaleY->value();
    double sZ = ui->scaleZ->value();
    double dx = ui->trX->text().toDouble();
    double dy = ui->trY->text().toDouble();
    double dz = ui->trZ->text().toDouble();
    pyramid.rotate(aX, aY, aZ);
    pyramid.scale(sX, sY, sZ);
    pyramid.translate(dx, dy, dz);
    QVector<QVector2D> fig2d = pyramid.parallelProject();
    QVector2D point1 = fig2d.at(0);
    QVector2D point2 = fig2d.at(1);
    QVector2D point3 = fig2d.at(2);
    QVector2D point4 = fig2d.at(3);
    //Draw 1 side 1-2
    this->scene->addLine(point1.x() + c.x(), c.y() - point1.y(), point2.x() + c.x(), c.y() - point2.y(), vPen);
    //Draw 2 side 1-3
    this->scene->addLine(point1.x() + c.x(), c.y() - point1.y(), point3.x() + c.x(), c.y() - point3.y(), vPen);
    //Draw 2 side 1-4
    this->scene->addLine(point1.x() + c.x(), c.y() - point1.y(), point4.x() + c.x(), c.y() - point4.y(), vPen);
    //Draw bottom 2-3
    this->scene->addLine(point2.x() + c.x(), c.y() - point2.y(), point3.x() + c.x(), c.y() - point3.y(), vPen);
    //Draw bottom 3-4
    this->scene->addLine(point3.x() + c.x(), c.y() - point3.y(), point4.x() + c.x(), c.y() - point4.y(), vPen);
    //Draw bottom 4-2
    this->scene->addLine(point4.x() + c.x(), c.y() - point4.y(), point2.x() + c.x(), c.y() - point2.y(), vPen);
}

MainWindow::~MainWindow()
{
    delete this->scene;
    delete ui;
}
