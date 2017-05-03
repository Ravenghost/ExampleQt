#include "rootwidget.h"
#include "ui_rootwidget.h"

RootWidget::RootWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RootWidget)
{
    ui->setupUi(this);

    segment = new Segment;

    ui->stackedWidget->addWidget(segment);

    connect(ui->buttonBack, &QPushButton::released, [this]{ setPage(0); });

    connect(ui->buttonSettings, &QPushButton::released, [this]{ setPage(1); });
    connect(ui->buttonMore, &QPushButton::released, [this]{ setPage(2); });
    connect(ui->comboBox, &QComboBox::currentTextChanged, ui->labelSettingsData, &QLabel::setText);

    connect(segment, &Segment::transferString, ui->labelMoreData, &QLabel::setText);
    connect(segment, &Segment::changePage, this, &RootWidget::setPage);
}

RootWidget::~RootWidget()
{
    delete ui;
}

void RootWidget::setPage(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}
