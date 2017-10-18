/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QPushButton *paintBtn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *x1;
    QLineEdit *x2;
    QLineEdit *x3;
    QLineEdit *x4;
    QLineEdit *y1;
    QLineEdit *y2;
    QLineEdit *y3;
    QLineEdit *y4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *z1;
    QLineEdit *z2;
    QLineEdit *z3;
    QLineEdit *z4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QSlider *rotateX;
    QSlider *rotateY;
    QSlider *rotateZ;
    QLabel *label_16;
    QSlider *scaleX;
    QLabel *label_17;
    QSlider *scaleY;
    QLabel *label_18;
    QSlider *scaleZ;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *trX;
    QLineEdit *trY;
    QLineEdit *trZ;
    QMenuBar *menuBar;
    QMenu *menuProgram;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1003, 693);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 611, 661));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(610, 0, 391, 661));
        paintBtn = new QPushButton(groupBox);
        paintBtn->setObjectName(QStringLiteral("paintBtn"));
        paintBtn->setGeometry(QRect(140, 600, 111, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 61, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 61, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 170, 61, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 220, 61, 16));
        x1 = new QLineEdit(groupBox);
        x1->setObjectName(QStringLiteral("x1"));
        x1->setGeometry(QRect(30, 70, 61, 21));
        x2 = new QLineEdit(groupBox);
        x2->setObjectName(QStringLiteral("x2"));
        x2->setGeometry(QRect(30, 130, 61, 21));
        x3 = new QLineEdit(groupBox);
        x3->setObjectName(QStringLiteral("x3"));
        x3->setGeometry(QRect(30, 190, 61, 21));
        x4 = new QLineEdit(groupBox);
        x4->setObjectName(QStringLiteral("x4"));
        x4->setGeometry(QRect(30, 250, 61, 21));
        y1 = new QLineEdit(groupBox);
        y1->setObjectName(QStringLiteral("y1"));
        y1->setGeometry(QRect(120, 70, 61, 21));
        y2 = new QLineEdit(groupBox);
        y2->setObjectName(QStringLiteral("y2"));
        y2->setGeometry(QRect(120, 130, 61, 21));
        y3 = new QLineEdit(groupBox);
        y3->setObjectName(QStringLiteral("y3"));
        y3->setGeometry(QRect(120, 190, 61, 21));
        y4 = new QLineEdit(groupBox);
        y4->setObjectName(QStringLiteral("y4"));
        y4->setGeometry(QRect(120, 250, 61, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 50, 61, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 110, 61, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 170, 61, 16));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 230, 61, 16));
        z1 = new QLineEdit(groupBox);
        z1->setObjectName(QStringLiteral("z1"));
        z1->setGeometry(QRect(210, 70, 61, 21));
        z2 = new QLineEdit(groupBox);
        z2->setObjectName(QStringLiteral("z2"));
        z2->setGeometry(QRect(210, 130, 61, 21));
        z3 = new QLineEdit(groupBox);
        z3->setObjectName(QStringLiteral("z3"));
        z3->setGeometry(QRect(210, 190, 61, 21));
        z4 = new QLineEdit(groupBox);
        z4->setObjectName(QStringLiteral("z4"));
        z4->setGeometry(QRect(210, 250, 61, 21));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(210, 50, 61, 16));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(210, 110, 61, 16));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(210, 170, 61, 16));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(210, 230, 61, 16));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 320, 81, 16));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 350, 81, 16));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 380, 81, 16));
        rotateX = new QSlider(groupBox);
        rotateX->setObjectName(QStringLiteral("rotateX"));
        rotateX->setGeometry(QRect(110, 320, 160, 16));
        rotateX->setMaximum(100);
        rotateX->setOrientation(Qt::Horizontal);
        rotateY = new QSlider(groupBox);
        rotateY->setObjectName(QStringLiteral("rotateY"));
        rotateY->setGeometry(QRect(110, 350, 160, 16));
        rotateY->setOrientation(Qt::Horizontal);
        rotateZ = new QSlider(groupBox);
        rotateZ->setObjectName(QStringLiteral("rotateZ"));
        rotateZ->setGeometry(QRect(110, 380, 160, 16));
        rotateZ->setOrientation(Qt::Horizontal);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 410, 91, 16));
        scaleX = new QSlider(groupBox);
        scaleX->setObjectName(QStringLiteral("scaleX"));
        scaleX->setGeometry(QRect(130, 410, 160, 16));
        scaleX->setMinimum(1);
        scaleX->setMaximum(100);
        scaleX->setOrientation(Qt::Horizontal);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(30, 440, 91, 16));
        scaleY = new QSlider(groupBox);
        scaleY->setObjectName(QStringLiteral("scaleY"));
        scaleY->setGeometry(QRect(130, 440, 160, 16));
        scaleY->setMinimum(1);
        scaleY->setMaximum(100);
        scaleY->setOrientation(Qt::Horizontal);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(30, 470, 91, 16));
        scaleZ = new QSlider(groupBox);
        scaleZ->setObjectName(QStringLiteral("scaleZ"));
        scaleZ->setGeometry(QRect(130, 470, 160, 16));
        scaleZ->setMinimum(1);
        scaleZ->setMaximum(100);
        scaleZ->setOrientation(Qt::Horizontal);
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 500, 91, 16));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 530, 91, 16));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 560, 91, 16));
        trX = new QLineEdit(groupBox);
        trX->setObjectName(QStringLiteral("trX"));
        trX->setGeometry(QRect(110, 500, 61, 21));
        trY = new QLineEdit(groupBox);
        trY->setObjectName(QStringLiteral("trY"));
        trY->setGeometry(QRect(110, 530, 61, 21));
        trZ = new QLineEdit(groupBox);
        trZ->setObjectName(QStringLiteral("trZ"));
        trZ->setGeometry(QRect(110, 560, 61, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1003, 22));
        menuProgram = new QMenu(menuBar);
        menuProgram->setObjectName(QStringLiteral("menuProgram"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuProgram->menuAction());
        menuProgram->addSeparator();
        menuProgram->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\200\320\270\321\201\320\276\320\262\320\260\320\275\320\270\321\217", 0));
        paintBtn->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214", 0));
        label->setText(QApplication::translate("MainWindow", "x1", 0));
        label_2->setText(QApplication::translate("MainWindow", "x2", 0));
        label_3->setText(QApplication::translate("MainWindow", "x3", 0));
        label_4->setText(QApplication::translate("MainWindow", "x4", 0));
        label_5->setText(QApplication::translate("MainWindow", "y1", 0));
        label_6->setText(QApplication::translate("MainWindow", "y2", 0));
        label_7->setText(QApplication::translate("MainWindow", "y3", 0));
        label_8->setText(QApplication::translate("MainWindow", "y4", 0));
        label_9->setText(QApplication::translate("MainWindow", "z1", 0));
        label_10->setText(QApplication::translate("MainWindow", "z2", 0));
        label_11->setText(QApplication::translate("MainWindow", "z3", 0));
        label_12->setText(QApplication::translate("MainWindow", "z4", 0));
        label_13->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 x", 0));
        label_14->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 y", 0));
        label_15->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 z", 0));
        label_16->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\202\321\217\320\266\320\265\320\275\320\270\320\265 x", 0));
        label_17->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\202\321\217\320\266\320\265\320\275\320\270\320\265 y", 0));
        label_18->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\202\321\217\320\266\320\265\320\275\320\270\320\265 z", 0));
        label_19->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\262\320\270\320\263 \320\277\320\276 x", 0));
        label_20->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\262\320\270\320\263 \320\277\320\276 y", 0));
        label_21->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\262\320\270\320\263 \320\277\320\276 z", 0));
        menuProgram->setTitle(QApplication::translate("MainWindow", "Program", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
