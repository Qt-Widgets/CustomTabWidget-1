#ifndef MYTABWIDGET_H
#define MYTABWIDGET_H

#include <QObject>
#include <QTabWidget>

class MyTabWidget : public QTabWidget
{
    Q_OBJECT
public:
    explicit MyTabWidget(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MYTABWIDGET_H
