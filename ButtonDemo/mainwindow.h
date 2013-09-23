#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    // QtCreator made this
    void on_buttonOne_clicked();
    // I made this
    void buttonTwo_clicked();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
