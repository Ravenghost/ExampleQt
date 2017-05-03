#include "segment.h"
#include "ui_segment.h"

Segment::Segment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Segment)
{
    ui->setupUi(this);

    connect(ui->buttonBack, &QPushButton::released, [this]{ setPage(0); });
    connect(ui->buttonBack2, &QPushButton::released, [this]{ setPage(0); });
    connect(ui->buttonPage1, &QPushButton::released, [this]{ setPage(1); });
    connect(ui->buttonPage2, &QPushButton::released, [this]{ setPage(2); });
    connect(ui->buttonBackMain, &QPushButton::released, [this]{ emit changePage(0); });
    connect(ui->comboBox, &QComboBox::currentTextChanged, this, &Segment::transferString);
}

Segment::~Segment()
{
    delete ui;
}

void Segment::setPage(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}
