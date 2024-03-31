#include <QMessageBox>
#include "generalpageabovesidefieloftemplates.h"
#include "newfile.h"
#include "resume.h"
#include "resumecoral.h"
#include "letter.h"
#include "projectproposal.h"
#include "brochure.h"


Templates::Templates(QWidget *parent)
    : QWidget(parent)
{
    //  this -> setFixedHeight(283);

    this->setFixedSize(1300, 1000);
    this -> setStyleSheet("background-color: #fff;");
    m_mainLayout = new QVBoxLayout(this);

    m_topLayout = new QHBoxLayout();

    m_startNewDocumentLabel = new QLabel("Start a new Document");
    m_startNewDocumentLabel -> setStyleSheet("color: black");
    m_topLayout -> addWidget(m_startNewDocumentLabel);

    m_templateGalleryButton = new QPushButton("Template Gallery");
    m_templateGalleryButton -> setIcon(QIcon("/scroll.png"));
    m_templateGalleryButton -> setFixedSize(QSize(188,24));
    m_templateGalleryButton -> setStyleSheet("color: black");
    connect(m_templateGalleryButton, SIGNAL(clicked()), this, SLOT(m_templateGallery()));

    m_topLayout -> addWidget(m_templateGalleryButton);

    m_templatesHideButton = new QPushButton();
    m_templatesHideButton -> setIcon(QIcon("/home/mariam/Ai-Docs-Movses/src/ui/components/GeneralPageAboveSideFielOfTemplates/options.png"));
    m_templatesHideButton -> setFixedSize(QSize(24,24));
    connect(m_templatesHideButton, SIGNAL(clicked()), this, SLOT(close()));

    m_topLayout -> addWidget(m_templatesHideButton);

    m_mainLayout -> addLayout(m_topLayout);

    m_templatesList = new QListWidget(this);
    m_templatesList -> setViewMode(QListWidget::IconMode);
    m_templatesList -> setIconSize(QSize(100,300));

    QListWidgetItem *newFile1Item = new QListWidgetItem(QIcon("/home/mariam/Ai-Docs-Movses/src/ui/components/GeneralPageAboveSideFielOfTemplates/plus_template.png"), "Blank Document", m_templatesList);

    connect(m_templatesList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(m_newFileItem()));

    QListWidgetItem *template1Item = new QListWidgetItem(QIcon("/home/mariam/Ai-Docs-Movses/src/ui/components/GeneralPageAboveSideFielOfTemplates/resume2_template.png"), "Resume", m_templatesList);
    QListWidgetItem *template2Item = new QListWidgetItem(QIcon("/home/mariam/Ai-Docs-Movses/src/ui/components/GeneralPageAboveSideFielOfTemplates/resume_template.png"), "Resume", m_templatesList);
    QListWidgetItem *template3Item = new QListWidgetItem(QIcon("/home/mariam/Ai-Docs-Movses/src/ui/components/GeneralPageAboveSideFielOfTemplates/letter_template.png"), "Letter", m_templatesList);
    QListWidgetItem *template4Item = new QListWidgetItem(QIcon("/home/mariam/Ai-Docs-Movses/src/ui/components/GeneralPageAboveSideFielOfTemplates/project_template.png"), "Project proposal", m_templatesList);
    QListWidgetItem *template5Item = new QListWidgetItem(QIcon("/home/mariam/Ai-Docs-Movses/src/ui/components/GeneralPageAboveSideFielOfTemplates/brochure_template.png"), "Brochure", m_templatesList);

    m_templatesList->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    m_templatesList -> setIconSize(QSize(118,194));
    m_templatesList -> setSpacing(60);

    //   connect(m_templatesList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(m_newFileItem()));
    connect(m_templatesList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(m_template1Item()));
    connect(m_templatesList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(m_template2Item()));
    connect(m_templatesList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(m_template3Item()));
    connect(m_templatesList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(m_template4Item()));
    connect(m_templatesList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(m_template5Item()));

    m_mainLayout -> addWidget(m_templatesList);

    m_lowLayout = new QHBoxLayout();
    m_lowLayout -> addSpacing(60);

    m_newFileDescriptionLabel = new QLabel("Description 1");
    m_template1DescriptionLabel = new QLabel("Description 2");
    m_template2DescriptionLabel = new QLabel("Description 3");
    m_template3DescriptionLabel = new QLabel("Description 4");
    m_template4DescriptionLabel = new QLabel("Description 5");
    m_template5DescriptionLabel = new QLabel("Description 6");

    m_newFileDescriptionLabel -> setStyleSheet("color: #A8A7A7");
    m_template1DescriptionLabel -> setStyleSheet("color: #A8A7A7");
    m_template2DescriptionLabel -> setStyleSheet("color: #A8A7A7");
    m_template3DescriptionLabel -> setStyleSheet("color: #A8A7A7");
    m_template4DescriptionLabel -> setStyleSheet("color: #A8A7A7");
    m_template5DescriptionLabel -> setStyleSheet("color: #A8A7A7");

    m_lowLayout -> addWidget(m_newFileDescriptionLabel);
    m_lowLayout -> addWidget(m_template1DescriptionLabel);
    m_lowLayout -> addWidget(m_template2DescriptionLabel);
    m_lowLayout -> addWidget(m_template3DescriptionLabel);
    m_lowLayout -> addWidget(m_template4DescriptionLabel);
    m_lowLayout -> addWidget(m_template5DescriptionLabel);

    m_mainLayout -> addLayout(m_lowLayout);

}


void Templates::m_newFileItem ()
{
    NewFile *newFileWidget = new NewFile(this);
    newFileWidget -> setWindowTitle("NewFile");
    newFileWidget -> show();
}

void Templates::m_template1Item ()
{
    Resume *template1Widget = new Resume(this);
    template1Widget -> setWindowTitle("Template 1");
    template1Widget -> show();
}

void Templates::m_template2Item ()
{
    ResumeCoral * template2Widget = new ResumeCoral(this);
    template2Widget -> setWindowTitle("Template 2");
    template2Widget -> show();
}

void Templates::m_template3Item ()
{
    Letter *template3Widget = new Letter(this);
    template3Widget -> setWindowTitle("Template 3");
    template3Widget -> show();
}

void Templates::m_template4Item ()
{
    ProjectProposal *template4Widget = new ProjectProposal(this);
    template4Widget -> setWindowTitle("Template 4");
    template4Widget -> show();
}

void Templates::m_template5Item ()
{
    Brochure * template5Widget = new Brochure(this);
    template5Widget -> setWindowTitle("Template 5");
    template5Widget -> show();
}

void Templates::m_templateGallery ()
{
    QMessageBox::information(this, "Chek", "This button works");
}
