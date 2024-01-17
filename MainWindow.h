#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <bits/stdc++.h>

#define NINE_KEY_NUM 18

using namespace std;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

    void init();
    void opt();
    void layout();

private:
    const QString nineKey[NINE_KEY_NUM] = {"123", ",.?!", "ABC", "DEF", "\u232B",
                                           "#@\u00A5", "GHI", "JKL", "MNO", "^_^",
                                           "abc", "PQRS", "TUV", "WXYZ", "发送",
                                           "\u263B", "选拼音", "空格"};
    const QString def = "我  你  那  不  那个  行  这个";
    QStringList optList;
    QLineEdit *input;
    QLabel *primary;
    QPushButton *button[NINE_KEY_NUM];
    QPushButton *cut, *voice;
};

#endif //MAINWINDOW_H
