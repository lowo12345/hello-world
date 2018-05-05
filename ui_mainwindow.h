/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_N;
    QAction *actionOPEN_O;
    QAction *actionSAVE_S;
    QAction *actionSadfas;
    QAction *actionDfgdfh;
    QAction *actionColor;
    QAction *actionUnderline;
    QAction *actionSelect_All;
    QAction *actionPASTE_Ctrl_C;
    QAction *actionCopy_Ctrl_V;
    QAction *actionDelete_Del;
    QAction *actionShear_Ctrl_X;
    QAction *actionCancel_Ctrl_Z;
    QAction *actionExit_X_Ctrl_X;
    QAction *actionFind_Ctrl_F;
    QAction *actionReplace_Ctrl_H;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menuAsdf_G;
    QMenu *menuAsdfasdf_G;
    QMenu *menu_H;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(672, 451);
        actionNew_N = new QAction(MainWindow);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        actionOPEN_O = new QAction(MainWindow);
        actionOPEN_O->setObjectName(QStringLiteral("actionOPEN_O"));
        actionSAVE_S = new QAction(MainWindow);
        actionSAVE_S->setObjectName(QStringLiteral("actionSAVE_S"));
        actionSadfas = new QAction(MainWindow);
        actionSadfas->setObjectName(QStringLiteral("actionSadfas"));
        actionDfgdfh = new QAction(MainWindow);
        actionDfgdfh->setObjectName(QStringLiteral("actionDfgdfh"));
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QStringLiteral("actionUnderline"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionPASTE_Ctrl_C = new QAction(MainWindow);
        actionPASTE_Ctrl_C->setObjectName(QStringLiteral("actionPASTE_Ctrl_C"));
        actionCopy_Ctrl_V = new QAction(MainWindow);
        actionCopy_Ctrl_V->setObjectName(QStringLiteral("actionCopy_Ctrl_V"));
        actionDelete_Del = new QAction(MainWindow);
        actionDelete_Del->setObjectName(QStringLiteral("actionDelete_Del"));
        actionShear_Ctrl_X = new QAction(MainWindow);
        actionShear_Ctrl_X->setObjectName(QStringLiteral("actionShear_Ctrl_X"));
        actionCancel_Ctrl_Z = new QAction(MainWindow);
        actionCancel_Ctrl_Z->setObjectName(QStringLiteral("actionCancel_Ctrl_Z"));
        actionExit_X_Ctrl_X = new QAction(MainWindow);
        actionExit_X_Ctrl_X->setObjectName(QStringLiteral("actionExit_X_Ctrl_X"));
        actionFind_Ctrl_F = new QAction(MainWindow);
        actionFind_Ctrl_F->setObjectName(QStringLiteral("actionFind_Ctrl_F"));
        actionReplace_Ctrl_H = new QAction(MainWindow);
        actionReplace_Ctrl_H->setObjectName(QStringLiteral("actionReplace_Ctrl_H"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menuAsdf_G = new QMenu(menuBar);
        menuAsdf_G->setObjectName(QStringLiteral("menuAsdf_G"));
        menuAsdfasdf_G = new QMenu(menuBar);
        menuAsdfasdf_G->setObjectName(QStringLiteral("menuAsdfasdf_G"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menuAsdf_G->menuAction());
        menuBar->addAction(menuAsdfasdf_G->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(actionNew_N);
        menu_F->addAction(actionSAVE_S);
        menu_F->addAction(actionOPEN_O);
        menu_F->addSeparator();
        menu_F->addAction(actionExit_X_Ctrl_X);
        menuAsdf_G->addAction(actionSadfas);
        menuAsdf_G->addAction(actionDfgdfh);
        menuAsdf_G->addAction(actionColor);
        menuAsdf_G->addAction(actionUnderline);
        menuAsdfasdf_G->addAction(actionSelect_All);
        menuAsdfasdf_G->addSeparator();
        menuAsdfasdf_G->addAction(actionPASTE_Ctrl_C);
        menuAsdfasdf_G->addAction(actionCopy_Ctrl_V);
        menuAsdfasdf_G->addAction(actionDelete_Del);
        menuAsdfasdf_G->addAction(actionShear_Ctrl_X);
        menuAsdfasdf_G->addSeparator();
        menuAsdfasdf_G->addAction(actionCancel_Ctrl_Z);
        menuAsdfasdf_G->addSeparator();
        menuAsdfasdf_G->addAction(actionFind_Ctrl_F);
        menuAsdfasdf_G->addAction(actionReplace_Ctrl_H);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew_N->setText(QApplication::translate("MainWindow", "New(&N)                  Ctrl+N", 0));
        actionOPEN_O->setText(QApplication::translate("MainWindow", "Open(&O)                 Ctrl+O", 0));
        actionSAVE_S->setText(QApplication::translate("MainWindow", "Save(&S)                   Ctrl+S", 0));
        actionSadfas->setText(QApplication::translate("MainWindow", "Bold", 0));
        actionDfgdfh->setText(QApplication::translate("MainWindow", "Italic ", 0));
        actionColor->setText(QApplication::translate("MainWindow", "Color", 0));
        actionUnderline->setText(QApplication::translate("MainWindow", "Underline", 0));
        actionSelect_All->setText(QApplication::translate("MainWindow", "All(&A)                            Ctrl+A ", 0));
        actionPASTE_Ctrl_C->setText(QApplication::translate("MainWindow", "Paste(&C)                        Ctrl+C", 0));
        actionCopy_Ctrl_V->setText(QApplication::translate("MainWindow", "Copy(&V)                        Ctrl+V", 0));
        actionDelete_Del->setText(QApplication::translate("MainWindow", "Delete(&D)                           Del", 0));
        actionShear_Ctrl_X->setText(QApplication::translate("MainWindow", "Shear(&X)                       Ctrl+X", 0));
        actionCancel_Ctrl_Z->setText(QApplication::translate("MainWindow", "Cancel(&Z)                      Ctrl+Z", 0));
        actionExit_X_Ctrl_X->setText(QApplication::translate("MainWindow", "Exit(&X)                     Ctrl+X", 0));
        actionFind_Ctrl_F->setText(QApplication::translate("MainWindow", "Find(&F)                          Ctrl+F", 0));
        actionReplace_Ctrl_H->setText(QApplication::translate("MainWindow", "Replace(&H)                    Ctrl+H", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F)", 0));
        menuAsdf_G->setTitle(QApplication::translate("MainWindow", "\345\255\227\344\275\223 (&W)", 0));
        menuAsdfasdf_G->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221  (&E)", 0));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251\357\274\210&H\357\274\211", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
