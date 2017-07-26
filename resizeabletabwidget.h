#ifndef RESIZEABLETABWIDGET_H
#define RESIZEABLETABWIDGET_H

#include <QObject>
#include <QWidget>
#include <QHBoxLayout>
#include <QStackedLayout>
#include <QPushButton>
#include <QVBoxLayout>
class ResizeableTabWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ResizeableTabWidget(QWidget *parent = nullptr);

signals:

public slots:

private:
    //layouts
    QHBoxLayout *stimAndAblationTabLayout;
    QHBoxLayout *stimTabLayout;
    QHBoxLayout *ablationTabLayout;
    QStackedLayout *stackedLayout;
    QVBoxLayout *stackAndTabLayouts;
    //stim
    QPushButton *sensoryTabButtion;
    QPushButton *motorTabButtion;
    // ablation
    QPushButton *lesionTabButtion;
    QPushButton *dosedTabButtion;
    QPushButton *simplicityTabButtion;
    QPushButton *cordotomyTabButtion;
};

#endif // RESIZEABLETABWIDGET_H
