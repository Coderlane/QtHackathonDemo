#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    // This sets up the ui. It is required.
    ui->setupUi(this);
    // Since I am manually connect a signal and a slot, I need to use connect to connect them
    connect(ui->buttonTwo, SIGNAL(clicked()), this, SLOT(buttonTwo_clicked()));
}

MainWindow::~MainWindow()
{
    // This destroys the ui. It is required.
    delete ui;
}

// Qt Creator created this function
void MainWindow::on_buttonOne_clicked()
{
    ui->label->setText("Button One Clicked.");
}

// I created this function
void MainWindow::buttonTwo_clicked(){
 ui->label->setText("Button Two Clicked.");
}
