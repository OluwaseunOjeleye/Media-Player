/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionForward;
    QAction *actionBackward;
    QAction *actionOpen_Media_Folder;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontal_Layout1;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontal_Layout2;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuVideo;
    QMenu *menuTool;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(570, 358);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMouseTracking(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons/mp3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon1);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icons/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icons/016-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QStringLiteral("actionForward"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icons/031-button-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionForward->setIcon(icon4);
        actionBackward = new QAction(MainWindow);
        actionBackward->setObjectName(QStringLiteral("actionBackward"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/icons/035-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackward->setIcon(icon5);
        actionOpen_Media_Folder = new QAction(MainWindow);
        actionOpen_Media_Folder->setObjectName(QStringLiteral("actionOpen_Media_Folder"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 371, 261));
        horizontal_Layout1 = new QHBoxLayout(horizontalLayoutWidget);
        horizontal_Layout1->setSpacing(6);
        horizontal_Layout1->setContentsMargins(11, 11, 11, 11);
        horizontal_Layout1->setObjectName(QStringLiteral("horizontal_Layout1"));
        horizontal_Layout1->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(370, 0, 201, 261));
        horizontal_Layout2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontal_Layout2->setSpacing(6);
        horizontal_Layout2->setContentsMargins(11, 11, 11, 11);
        horizontal_Layout2->setObjectName(QStringLiteral("horizontal_Layout2"));
        horizontal_Layout2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(horizontalLayoutWidget_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontal_Layout2->addWidget(listWidget);

        MainWindow->setCentralWidget(centralWidget);
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        listWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 570, 27));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuVideo = new QMenu(menuBar);
        menuVideo->setObjectName(QStringLiteral("menuVideo"));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QStringLiteral("menuTool"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setCursor(QCursor(Qt::CrossCursor));
        mainToolBar->setMouseTracking(false);
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setStyleSheet(QStringLiteral(""));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuVideo->menuAction());
        menuBar->addAction(menuTool->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Media_Folder);
        menuVideo->addAction(actionPlay);
        menuVideo->addAction(actionPause);
        menuVideo->addAction(actionStop);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionPlay);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionStop);
        mainToolBar->addAction(actionBackward);
        mainToolBar->addAction(actionForward);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "J Media Player", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open Media", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Open a File</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("MainWindow", "Play", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPause->setToolTip(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionForward->setText(QApplication::translate("MainWindow", "Forward", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionForward->setToolTip(QApplication::translate("MainWindow", "Forward", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionBackward->setText(QApplication::translate("MainWindow", "Backward", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionBackward->setToolTip(QApplication::translate("MainWindow", "Backward", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOpen_Media_Folder->setText(QApplication::translate("MainWindow", "Open Media Folder", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen_Media_Folder->setToolTip(QApplication::translate("MainWindow", "Open Media Folder(Playlist)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuVideo->setTitle(QApplication::translate("MainWindow", "Video", Q_NULLPTR));
        menuTool->setTitle(QApplication::translate("MainWindow", "Tool", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "JPlayer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
