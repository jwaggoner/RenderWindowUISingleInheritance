/********************************************************************************
** Form generated from reading UI file 'RenderWindowUISingleInheritance.ui'
**
** Created: Sat Mar 16 01:23:36 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERWINDOWUISINGLEINHERITANCE_H
#define UI_RENDERWINDOWUISINGLEINHERITANCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_RenderWindowUISingleInheritance
{
public:
    QAction *actionOpenFile;
    QAction *actionExit;
    QAction *actionPrint;
    QAction *actionHelp;
    QAction *actionSave;
    QWidget *centralwidget;
    QVTKWidget *qvtkWidget;

    void setupUi(QMainWindow *RenderWindowUISingleInheritance)
    {
        if (RenderWindowUISingleInheritance->objectName().isEmpty())
            RenderWindowUISingleInheritance->setObjectName(QString::fromUtf8("RenderWindowUISingleInheritance"));
        RenderWindowUISingleInheritance->resize(541, 583);
        actionOpenFile = new QAction(RenderWindowUISingleInheritance);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        actionOpenFile->setEnabled(true);
        actionExit = new QAction(RenderWindowUISingleInheritance);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionPrint = new QAction(RenderWindowUISingleInheritance);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionHelp = new QAction(RenderWindowUISingleInheritance);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionSave = new QAction(RenderWindowUISingleInheritance);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(RenderWindowUISingleInheritance);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        qvtkWidget = new QVTKWidget(centralwidget);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(10, 20, 511, 541));
        RenderWindowUISingleInheritance->setCentralWidget(centralwidget);

        retranslateUi(RenderWindowUISingleInheritance);

        QMetaObject::connectSlotsByName(RenderWindowUISingleInheritance);
    } // setupUi

    void retranslateUi(QMainWindow *RenderWindowUISingleInheritance)
    {
        RenderWindowUISingleInheritance->setWindowTitle(QApplication::translate("RenderWindowUISingleInheritance", "RenderWindowUISingleInheritance", 0, QApplication::UnicodeUTF8));
        actionOpenFile->setText(QApplication::translate("RenderWindowUISingleInheritance", "Open File...", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("RenderWindowUISingleInheritance", "Exit", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("RenderWindowUISingleInheritance", "Print", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("RenderWindowUISingleInheritance", "Help", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("RenderWindowUISingleInheritance", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenderWindowUISingleInheritance: public Ui_RenderWindowUISingleInheritance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERWINDOWUISINGLEINHERITANCE_H
