#include "mainwindow.h"
#include "ui_mainwindow.h"  // 界面头文件


// 构造函数
MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);


    MainWindow w;
    w.show();

    return a.exec();
}
