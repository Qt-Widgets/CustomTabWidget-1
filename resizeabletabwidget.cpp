#include "resizeabletabwidget.h"
#include <QSpacerItem>
#include "mytabwidget.h"
ResizeableTabWidget::ResizeableTabWidget(QWidget *parent) : QWidget(parent)
{
    // setup horizontal layouts for tabs
    stimAndAblationTabLayout = new QHBoxLayout(); // will contain both stim and ablation layouts
    stimTabLayout = new QHBoxLayout();
    ablationTabLayout = new QHBoxLayout();
    stackedLayout = new QStackedLayout();
    stackAndTabLayouts = new QVBoxLayout();
    // stim
    sensoryTabButtion = new QPushButton("SENSORY");
    motorTabButtion = new QPushButton("MOTOR");
    // ablation
    lesionTabButtion = new QPushButton("LESION");
    dosedTabButtion = new QPushButton("DOSED");
    simplicityTabButtion = new QPushButton("SIMPLICITY");
    cordotomyTabButtion = new QPushButton("CORDOTOMY");

    // add stim buttons to stim layout
    stimTabLayout->addWidget(sensoryTabButtion);
    stimTabLayout->addWidget(motorTabButtion);

    // add ablation buttons to ablation layout
    ablationTabLayout->addWidget(lesionTabButtion);
    ablationTabLayout->addWidget(dosedTabButtion);
    ablationTabLayout->addWidget(simplicityTabButtion);
    ablationTabLayout->addWidget(cordotomyTabButtion);

    MyTabWidget *widge = new MyTabWidget();
    // put stim, spacer, ablation layouts in corresponding order
    stimAndAblationTabLayout->addLayout(stimTabLayout);
    stimAndAblationTabLayout->addSpacerItem(new QSpacerItem(1,1, QSizePolicy::Expanding, QSizePolicy::Fixed)); // but a spacer in between
    stimAndAblationTabLayout->addLayout(ablationTabLayout);

    // add tabs first then the stacked layout below it
    stackAndTabLayouts->addWidget(widge);
    stackAndTabLayouts->addLayout(stackedLayout);
    setLayout(stackAndTabLayouts);
}
