//
// Created by 2x93 on 24/09/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_browser.h" resolved

#include "../include/browser.h"
#include "../include/ui_browser.h"


browser::browser(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::browser) {
    ui->setupUi(this);
}

browser::~browser() {
    delete ui;
}
