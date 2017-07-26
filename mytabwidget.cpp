#include "mytabwidget.h"
#include "mytabbar.h"
#include "QPushButton"
MyTabWidget::MyTabWidget(QWidget *parent)
    : QTabWidget(parent)
{
    QPushButton *button1 = new QPushButton("BUTTON1");
    QPushButton *button2 = new QPushButton("BUTTON2");
    QPushButton *button3 = new QPushButton("BUTTON3");
    QPushButton *button4 = new QPushButton("BUTTON4");

    this->setStyleSheet("QTabBar::tab:disabled {"
                        "width: 300px;"
                        "color: transparent;"
                        "background: transparent;}");

    QPushButton *button5 = new QPushButton("BUTTON5");
    QPushButton *button6 = new QPushButton("BUTTON6");
    this->setGeometry(QRect(10, 10, 300, 250));
    this->addTab(button5, "SENSORY");
    this->addTab(button6, "MOTOR");
    this->addTab(new QWidget(), "--SPACER--");
    this->setTabEnabled(2, false);
    this->addTab(button1, "LESION");
    this->addTab(button2, "DOSED");
    this->addTab(button3, "SIMPLICITY");
    this->addTab(button4, "CORDOTOMY");
    this->setTabShape(QTabWidget::Triangular);
}
