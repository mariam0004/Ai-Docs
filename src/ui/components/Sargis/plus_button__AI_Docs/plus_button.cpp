#include "plus_button.h"
#include <QLabel>
#include <QPixmap>
#include <QHBoxLayout>
#include <QListWidgetItem>
#include <QTimer>
#include <QString>
#include <QScreen>
#include <QRect>
#include <QApplication>


plus_button::plus_button(QWidget *parent) : QWidget(parent)
{
    central_widget = nullptr;
    main_layout = nullptr;
    create_document_button = nullptr;
    mid_side_bar_layout = nullptr;
    template_list = nullptr;
    check_and_set_logo = 0;
    create_plus_button();
}


void plus_button::create_plus_button()
{

    setStyleSheet("background-color: white");
    setWindowTitle("Google Docs Mid-Side Bar");

    QScreen *screen = QApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();

    // Define the size of the widget
    int width = 1000;
    int height = 500;

    // Calculate the position to center the widget
    int x = (screenGeometry.width() - width) / 2;
    int y = (screenGeometry.height() - height) / 2;

    // Set the widget's geometry
    setGeometry(x, y, width, height);

    central_widget = new QWidget(this);

  //  create_document_button->setIconSize(QSize(60, 60));

    main_layout = new QVBoxLayout(central_widget);

    main_layout->setContentsMargins(0,70,0,0);
    QLabel *new_document_line = new QLabel("Start a new Document", this);
    new_document_line->setStyleSheet("font-weight: bold; font-size: 10px; margin-left: 10px");

    mid_side_bar_layout = new QGridLayout;
    main_layout->addLayout(mid_side_bar_layout);
    mid_side_bar_layout->addWidget(new_document_line,0,5,1,1);

    QToolButton *template_gallery_button = new QToolButton;
    template_gallery_button->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    template_gallery_button->setText("Template Gallery");
    template_gallery_button->setIcon(QIcon("/dots.png"));
    template_gallery_button->setStyleSheet("background-color: white; border: solid 2px white;");

    mid_side_bar_layout->addWidget(template_gallery_button, 0, 45, 1, 1);

    QToolButton *hide_templates_button = new QToolButton;
    hide_templates_button->setIcon(QIcon("/home/mariam/Downloads/dots.png"));
    hide_templates_button->setStyleSheet("background-color: white; border: solid 2px white");
    mid_side_bar_layout->addWidget(hide_templates_button,0,48,1,1);

    template_list = new QListWidget(this);
    template_list->setViewMode(QListWidget::IconMode);
    template_list->setIconSize(QSize(80, 80));
    template_list->setStyleSheet("background-color: gray; padding: 25px");
    mid_side_bar_layout->addWidget(template_list, 1, 0, 1, 80);

    QListWidgetItem *template_item1 = new QListWidgetItem(QIcon("/home/mariam/Downloads/plus_template.png"), "Blank\nDocument", template_list);
    template_item1->setFont(QFont("Arial", 8, QFont::Bold));
    template_item1->setSizeHint(QSize(78, 120));

    QListWidgetItem *template_item2 = new QListWidgetItem(QIcon("/home/mariam/Downloads/letter_template - Copy.png"), "Letter\nSpearmint", template_list);
    template_item2->setFont(QFont("Arial", 8, QFont::Bold));
    template_item2->setSizeHint(QSize(78, 120));

    QListWidgetItem *template_item3 = new QListWidgetItem(QIcon("/home/mariam/Downloads/resume_template.png"), "Resume\nSerif", template_list);
    template_item3->setFont(QFont("Arial", 8, QFont::Bold));
    template_item3->setSizeHint(QSize(78, 120));

    QListWidgetItem *template_item4 = new QListWidgetItem(QIcon("/home/mariam/Downloads/resume2_template.png"), "Resume\nCoral", template_list);
    template_item4->setFont(QFont("Arial", 8, QFont::Bold));
    template_item4->setSizeHint(QSize(78, 120));

    QListWidgetItem *template_item5 = new QListWidgetItem(QIcon("/home/mariam/Downloads//project_template.png"), "Project\nTropic", template_list);
    template_item5->setFont(QFont("Arial", 8, QFont::Bold));
    template_item5->setSizeHint(QSize(78, 120));

    QListWidgetItem *template_item6 = new QListWidgetItem(QIcon("/home/mariam/Downloads/brochure_template.png"), "Brochure\nGeometric", template_list);
    template_item6->setFont(QFont("Arial", 8, QFont::Bold));
    template_item6->setSizeHint(QSize(78, 120));

    QListWidgetItem *template_item7 = new QListWidgetItem(QIcon("/home/mariam/Downloads/report_template.png"), "Report\nLuxe", template_list);
    template_item7->setFont(QFont("Arial", 8, QFont::Bold));
    template_item7->setSizeHint(QSize(78, 120));

    create_document_button = new QToolButton;
    create_document_button->setIcon(QIcon("/home/mariam/Downloads/plusIcon - Copy.png"));
    create_document_button->setStyleSheet("width: 60px; height: 60px; border-radius: 2px; margin-above: 70px; margin-left:550px");

    create_document_button->setIconSize(QSize(55, 55));

    main_layout->addWidget(create_document_button);
    main_layout->setAlignment(create_document_button, Qt::AlignBottom);
    QTimer::singleShot(0,this, &plus_button::window_show_hide);

    connect(create_document_button, &QToolButton::clicked,this, &plus_button::window_show_hide);


    main_layout->setStretch(0, 1);

    // Set the horizontal stretch factor for mid_side_bar_layout to 1
    mid_side_bar_layout->setColumnStretch(0, 1);

    // Set the horizontal size policy for create_document_button to Fixed
    create_document_button->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);



}

void plus_button::window_show_hide()
{
    if(!check_and_set_logo)
    {
        check_and_set_logo = 1;
        create_document_button->setIcon(QIcon("/home/mariam/Downloads/plus_template.png"));
    }
    else
    {
        check_and_set_logo = 0;
        create_document_button->setIcon(QIcon("/home/mariam/Downloads/closeIcon - Copy.png"));
    }

    for (int i = 0; i < mid_side_bar_layout->count(); ++i) {
        mid_side_bar_layout->itemAt(i)->widget()->setVisible(!mid_side_bar_layout->itemAt(i)->widget()->isVisible());
    }
}

plus_button::~plus_button()
{
    delete central_widget;
    delete main_layout;
    delete create_document_button;
    delete mid_side_bar_layout;
    delete template_list;
}
