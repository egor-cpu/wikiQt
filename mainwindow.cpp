#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include "string"
#include "QtGui"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::next_picture(int a){
QPixmap b;
QString k="./picture/1.jpg";
k.replace('1',QString::number(a));
b.load(k);
    ui->label_2->setPixmap(b);
}

void MainWindow::next_text(int a, int b){
std::string text;
std::ifstream file;
file.open("wiki.txt");
std::getline(file,text);
while(!(text== '.'+std::to_string(a+1)+'.')){
    if(std::to_string(a)==text){
        std::getline(file,text);
        ui->label->setText(QString::fromStdString(text));
        if (a+1==b){
            break;
        }
    }
}
file.close();
}
void MainWindow::switching(int a){
    std::ifstream info;
    info.open("info.txt");
    char b;
    info>>b;
if(ui->pushButton_2){
    a--;
    if(a==0){
        a=int(b);
    }
    else if (a==int(b)){
        a=1;
    }
    MainWindow::next_picture(a);
    MainWindow::next_text(a,int(b));
}
if(ui->pushButton_3){
    a++;
    MainWindow::next_picture(a);
    MainWindow::next_text(a,int(b));
}
info.close();
}
