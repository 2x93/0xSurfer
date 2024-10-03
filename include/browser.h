//
// Created by 2x93 on 24/09/2024.
//

#ifndef INC_0XSURFER_BROWSER_H
#define INC_0XSURFER_BROWSER_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class browser; }
QT_END_NAMESPACE

class browser : public QMainWindow {
Q_OBJECT

public:
    explicit browser(QWidget *parent = nullptr);

    ~browser() override;

private:
    Ui::browser *ui;
};


#endif //INC_0XSURFER_BROWSER_H
