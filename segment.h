#ifndef SEGMENT_H
#define SEGMENT_H

#include <QWidget>

namespace Ui {
class Segment;
}

class Segment : public QWidget
{
    Q_OBJECT

public:
    explicit Segment(QWidget *parent = 0);
    ~Segment();

signals:
    void changePage(int index);
    void transferString(const QString &string);

private:
    Ui::Segment *ui;

private slots:
    void setPage(int index);
};

#endif // SEGMENT_H
