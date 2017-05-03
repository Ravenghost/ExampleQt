#ifndef ROOTWIDGET_H
#define ROOTWIDGET_H

#include <QWidget>
#include "segment.h"

namespace Ui {
class RootWidget;
}

class RootWidget : public QWidget
{
    Q_OBJECT

public:
    explicit RootWidget(QWidget *parent = 0);
    ~RootWidget();

private:
    Ui::RootWidget *ui;
    Segment *segment;

private slots:
    void setPage(int index);
};

#endif // ROOTWIDGET_H
