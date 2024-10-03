#include <QApplication>

#include "../include/browser.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    browser b;
    b.setWindowTitle("0xSurfer");

    QIcon icn = QIcon("../res/icon.png");
    b.setWindowIcon(icn);
    QGuiApplication::setWindowIcon(icn);

    b.show();

    return app.exec();
}