#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("Template");

    connect(&m_timer, &QTimer::timeout, this, &MainWindow::updateTimeLabel);
    m_timer.start(1000);
    updateTimeLabel();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTimeLabel()
{
    const auto now = QDateTime::currentDateTime();
    const QString formatted = now.toString("yyyy/MM/dd HH:mm:ss");
    ui->timeLabel->setText(formatted);
}

