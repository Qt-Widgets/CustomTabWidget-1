#ifndef MYTABBAR_H
#define MYTABBAR_H

#include <QObject>
#include <QTabBar>
#include <QWidget>
class MyTabBar : public QTabBar
{
    Q_OBJECT
public:
    explicit MyTabBar(QWidget *parent = nullptr);
};

#endif // MYTABBAR_H
