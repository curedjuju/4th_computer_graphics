#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar->setNativeMenuBar(false);
    createActions();
}

void MainWindow::createActions(){
    pSignalMapper = new QSignalMapper(this);
    connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(aboutMenuItemClicked()));
}

void MainWindow::aboutMenuItemClicked(){
    qDebug() << QString("aboutMenuItem clicked");
    QMessageBox msgBox;
    msgBox.setText("<p>Разработка: Ярных Роман, студент БПИ141</p>"
                   "<p>Реализация проецирования 3D фигур на плоскость</p>");
    msgBox.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
