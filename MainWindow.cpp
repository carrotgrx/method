#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent) {
    init();
    layout();
}

MainWindow::~MainWindow() {

}

void MainWindow::init() {
    QWidget *widget = new QWidget;
    QVBoxLayout *vBox = new QVBoxLayout;
    QGridLayout *grid = new QGridLayout;
    QHBoxLayout *hBox = new QHBoxLayout;
    input = new QLineEdit;
    primary = new QLabel;
    cut = new QPushButton;
    voice = new QPushButton;

    input->setFixedHeight(140);
    primary->setText(def);
    primary->setFixedHeight(20);
    vBox->addWidget(input);
    vBox->addWidget(primary, Qt::AlignHCenter);
    vBox->addLayout(hBox);

    QSizePolicy qSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; ++j) {
            button[5 * i + j] = new QPushButton();
            button[5 * i + j]->setText(nineKey[5 * i + j]);
            if (!nineKey[5 * i + j].compare("发送")) {
                grid->addWidget(button[5 * i + j], i, j, 2, 1);
            } else if (!nineKey[5 * i + j].compare("空格")) {
                grid->addWidget(button[5 * i + j], i, j, 1, 2);
                button[5 * i + j]->setSizePolicy(qSizePolicy);
                break;
            } else{
                grid->addWidget(button[5 * i + j], i, j, 1, 1);
            }
            button[5 * i + j]->setSizePolicy(qSizePolicy);
        }
    }
    opt();
    vBox->addLayout(grid);

    cut->setText("\u2617");
    cut->setFixedSize(20, 20);
    vBox->addWidget(cut);


    this->setCentralWidget(widget);
    widget->setLayout(vBox);
    this->resize(300, 400);
}

void MainWindow::opt() {
    optList.append("color:white");                              // 前景色
    optList.append("border-style:outset");                      // 边框风格
    optList.append("background-color:rgb(85,170,255)");         // 背景色
    optList.append("border-width:3px");                         // 边框宽度
    optList.append("border-color:rgb(240,248,255)");            // 边框颜色
    optList.append("border-radius:10px");                       // 边框倒角
//    optList.append("font:bold 12px");                           // 字体

    for (int i = 0; i < NINE_KEY_NUM; ++i) {
        button[i]->setStyleSheet(optList.join(';'));
    }
    cut->setStyleSheet(optList.join(';'));
}

void MainWindow::layout() {

}
