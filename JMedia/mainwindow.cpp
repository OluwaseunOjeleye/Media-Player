#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(width(), height());

    player=new QMediaPlayer(this);
    vwidget=new QVideoWidget(this);
    playlist=new QMediaPlaylist(player);
    playlist->setPlaybackMode(QMediaPlaylist::Loop);  // Set circular play mode playlist
    //..................................................................................................
    player->setVideoOutput(vwidget);
    //this->setCentralWidget(vwidget);//Makes video play in center
    //vwidget->setGeometry(70,70,20,20);
    //vwidget->setFixedSize(150,150);

    ui->horizontal_Layout1->addWidget(vwidget);
    //ui->centralWidget->setLayout(ui->horizontal_Layout1);

    //layout->addWidget(vwidget);
   //layout->addWidget(ui->listWidget);



    volumeslider=new QSlider(this);
    videoslider=new QSlider(this);
    volumeLabel=new QLabel(this);
    videoLabel=new QLabel(this);
    pbar=new QProgressBar(this);


    volumeslider->setOrientation(Qt::Horizontal);
    volumeslider->setValue(50);
    videoslider->setOrientation(Qt::Horizontal);
    volumeLabel->setText("Volume");
    videoLabel->setText("Duration");


    ui->statusBar->addPermanentWidget(volumeLabel);
    ui->statusBar->addPermanentWidget(volumeslider);
    ui->statusBar->addPermanentWidget(videoLabel);
    ui->statusBar->addPermanentWidget(videoslider);
    ui->statusBar->addPermanentWidget(pbar);

    connect(volumeslider, SIGNAL(valueChanged(int)),player, SLOT(setVolume(int)));//for volume

    //for video slider
    connect(player, &QMediaPlayer::durationChanged,videoslider,&QSlider::setMaximum);
    connect(player, &QMediaPlayer::positionChanged,videoslider,&QSlider::setValue);
    connect(videoslider, &QSlider::sliderMoved,player,&QMediaPlayer::setPosition);

    //for progress bar
    connect(player, &QMediaPlayer::durationChanged,pbar,&QProgressBar::setMaximum);
    connect(player, &QMediaPlayer::positionChanged,pbar,&QProgressBar::setValue);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString fname=QFileDialog::getOpenFileName(this,"Open a file","","Video File(*.*)");


    playlist->addMedia(QUrl::fromLocalFile(fname));
    player->setPlaylist(playlist);

    //player->setMedia(QUrl::fromLocalFile(fname));
    player->setVolume(50);
    on_actionPlay_triggered();
}


void MainWindow::on_actionOpen_Media_Folder_triggered()
{

    QString folder=QFileDialog::getExistingDirectory(this,tr("Select Folder for files"));
    if (folder.isEmpty()){
        return;
    }
    QDir MediasFolder(folder);
    QStringList medias=MediasFolder.entryList(QStringList()<<"*.*",QDir::Files);
    QList<QMediaContent> content;
    foreach (QString filePath, medias) {
        content.push_back(QUrl::fromLocalFile(MediasFolder.path()+"/"+filePath));
        QFileInfo mediaInfo(filePath);
        ui->listWidget->addItem(mediaInfo.fileName());
    }
    playlist->addMedia(content);
    ui->listWidget->setCurrentRow(playlist->currentIndex()!=-1? playlist->currentIndex():0);
    player->setPlaylist(playlist);

}


void MainWindow::on_actionPlay_triggered()
{
    player->play();
    ui->statusBar->showMessage("Playing...");
}

void MainWindow::on_actionPause_triggered()
{
    player->pause();
    ui->statusBar->showMessage("Paused...");
}

void MainWindow::on_actionStop_triggered()
{
    player->stop();
    ui->statusBar->showMessage("Stopped");
}

void MainWindow::on_actionForward_triggered()
{
    //player->setPosition(player->position()+100000000);
    ui->listWidget->setCurrentRow(playlist->currentIndex()+1);
    player->setPlaylist(playlist);
    player->play();
}


void MainWindow::on_actionBackward_triggered()
{
    int index;
    index=playlist->currentIndex();
    ui->listWidget->setCurrentRow(index);
    playlist->setCurrentIndex(index);
    player->setPlaylist(playlist);

}
