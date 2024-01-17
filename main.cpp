#include <QApplication>
#include "MainWindow.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
//    const char *filepath = "./a";
//    FILE *file;
//    if (fopen_s(&file, filepath, "r") != 0) {
//        cout << "error: cannot open this file " << filepath << endl;
//        return -1;
//    }
    QApplication a(argc, argv);
    MainWindow win;
    win.show();
    return QApplication::exec();
}

template<class T>
