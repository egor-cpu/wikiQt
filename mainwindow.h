#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void switching(int a);

private:
    void next_picture(int a);
    void next_text(int a, int b);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
