#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include <QSignalMapper>
#include <QDebug>
#include <QGraphicsScene>
#include <pyramid.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSignalMapper *pSignalMapper;
    QGraphicsScene *scene;
    void createActions();

private slots:
    void aboutMenuItemClicked();
    void paintBtnClicked();
};

#endif // MAINWINDOW_H
