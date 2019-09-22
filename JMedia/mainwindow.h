#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qmediaplayer.h>
#include <qvideowidget.h>
#include <qfiledialog.h>
#include <qprogressbar.h>
#include <qslider.h>
#include <qlabel.h>
#include <QMediaPlaylist>
#include <qstandarditemmodel.h>
#include <QHBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

    void on_actionForward_triggered();

    void on_actionOpen_Media_Folder_triggered();

    void on_actionBackward_triggered();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QVideoWidget *vwidget;
    QProgressBar *pbar;
    QSlider *volumeslider;
    QSlider *videoslider;
    QLabel *volumeLabel;
    QLabel *videoLabel;
    QMediaPlaylist *playlist;
    QStandardItemModel  *m_playListModel;
    QHBoxLayout *layout;
};

#endif // MAINWINDOW_H
