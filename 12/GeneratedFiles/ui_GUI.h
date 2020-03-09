/********************************************************************************
** Form generated from reading UI file 'GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QStackedWidget *mainStackedWidget;
    QWidget *administratorStackedWidgetPage;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *administratorHorizontalLayout;
    QVBoxLayout *administratorVerticalLayout;
    QListWidget *administratorDogsListWidget;
    QFormLayout *administratorDogFormLayout;
    QLabel *administratorNameLabel;
    QLineEdit *administratorNameLineEdit;
    QLabel *administratorBreedLabel;
    QLineEdit *administratorBreedLineEdit;
    QLabel *administratorBirthDateLabel;
    QLineEdit *administratorBirthDateLineEdit;
    QLabel *administratorVaccinationsNumberLabel;
    QLineEdit *administratorVaccinationsNumberLineEdit;
    QLabel *administratorPhotographLabel;
    QLineEdit *administratorPhotographLineEdit;
    QHBoxLayout *administratorPushButtonsHorizontalLayout;
    QPushButton *administratorAddPushButton;
    QPushButton *administratorUpdatePushButton;
    QPushButton *administratorDeletePushButton;
    QHBoxLayout *actionHorizontalLayout;
    QPushButton *undoPushButton;
    QPushButton *redoPushButton;
    QHBoxLayout *administratorFilePathHorizontalLayout;
    QLineEdit *administratorFilePathLineEdit;
    QPushButton *administratorSetFilePathPushButton;
    QPushButton *administratorUserModePushButton;
    QWidget *userStackedWidgetPage;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *userHorizontalLayout;
    QVBoxLayout *userVerticalLayout;
    QVBoxLayout *userMatchingDogsVerticalLayout;
    QLabel *userMatchingDogsLabel;
    QListWidget *userMatchingDogsListWidget;
    QHBoxLayout *userNextHorizontalLayout;
    QLineEdit *userNextLineEdit;
    QPushButton *userNextPushButton;
    QVBoxLayout *userFilterVerticalLayout;
    QFormLayout *userFilterFormLayout;
    QLabel *userBreedLabel;
    QLineEdit *userBreedLineEdit;
    QLabel *userVaccinationsNumberLabel;
    QLineEdit *userVaccinationsNumberLineEdit;
    QPushButton *userFilterPushButton;
    QVBoxLayout *userSavedDogsVerticalLayout;
    QHBoxLayout *userMylistHorizontalLayout;
    QLabel *userSavedDogsLabel;
    QPushButton *userMylitsPushButton;
    QListWidget *userSavedDogsListWidget;
    QHBoxLayout *userSaveHorizontalLayout;
    QLabel *userNameLabel;
    QLineEdit *userNameLineEdit;
    QPushButton *userSavePushButton;
    QVBoxLayout *userFilePathVerticalLayout;
    QHBoxLayout *userSetFilePathHorizontalLayout;
    QLineEdit *userFilePathLineEdit;
    QPushButton *userSetFilePathPushButton;
    QPushButton *userOpenFilePushButton;
    QPushButton *userAdministratorModePushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUIClass)
    {
        if (GUIClass->objectName().isEmpty())
            GUIClass->setObjectName(QString::fromUtf8("GUIClass"));
        GUIClass->resize(921, 689);
        GUIClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mainStackedWidget = new QStackedWidget(centralWidget);
        mainStackedWidget->setObjectName(QString::fromUtf8("mainStackedWidget"));
        administratorStackedWidgetPage = new QWidget();
        administratorStackedWidgetPage->setObjectName(QString::fromUtf8("administratorStackedWidgetPage"));
        horizontalLayout = new QHBoxLayout(administratorStackedWidgetPage);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        administratorHorizontalLayout = new QHBoxLayout();
        administratorHorizontalLayout->setSpacing(6);
        administratorHorizontalLayout->setObjectName(QString::fromUtf8("administratorHorizontalLayout"));
        administratorVerticalLayout = new QVBoxLayout();
        administratorVerticalLayout->setSpacing(6);
        administratorVerticalLayout->setObjectName(QString::fromUtf8("administratorVerticalLayout"));
        administratorDogsListWidget = new QListWidget(administratorStackedWidgetPage);
        administratorDogsListWidget->setObjectName(QString::fromUtf8("administratorDogsListWidget"));

        administratorVerticalLayout->addWidget(administratorDogsListWidget);

        administratorDogFormLayout = new QFormLayout();
        administratorDogFormLayout->setSpacing(6);
        administratorDogFormLayout->setObjectName(QString::fromUtf8("administratorDogFormLayout"));
        administratorNameLabel = new QLabel(administratorStackedWidgetPage);
        administratorNameLabel->setObjectName(QString::fromUtf8("administratorNameLabel"));

        administratorDogFormLayout->setWidget(0, QFormLayout::LabelRole, administratorNameLabel);

        administratorNameLineEdit = new QLineEdit(administratorStackedWidgetPage);
        administratorNameLineEdit->setObjectName(QString::fromUtf8("administratorNameLineEdit"));

        administratorDogFormLayout->setWidget(0, QFormLayout::FieldRole, administratorNameLineEdit);

        administratorBreedLabel = new QLabel(administratorStackedWidgetPage);
        administratorBreedLabel->setObjectName(QString::fromUtf8("administratorBreedLabel"));

        administratorDogFormLayout->setWidget(1, QFormLayout::LabelRole, administratorBreedLabel);

        administratorBreedLineEdit = new QLineEdit(administratorStackedWidgetPage);
        administratorBreedLineEdit->setObjectName(QString::fromUtf8("administratorBreedLineEdit"));

        administratorDogFormLayout->setWidget(1, QFormLayout::FieldRole, administratorBreedLineEdit);

        administratorBirthDateLabel = new QLabel(administratorStackedWidgetPage);
        administratorBirthDateLabel->setObjectName(QString::fromUtf8("administratorBirthDateLabel"));

        administratorDogFormLayout->setWidget(2, QFormLayout::LabelRole, administratorBirthDateLabel);

        administratorBirthDateLineEdit = new QLineEdit(administratorStackedWidgetPage);
        administratorBirthDateLineEdit->setObjectName(QString::fromUtf8("administratorBirthDateLineEdit"));

        administratorDogFormLayout->setWidget(2, QFormLayout::FieldRole, administratorBirthDateLineEdit);

        administratorVaccinationsNumberLabel = new QLabel(administratorStackedWidgetPage);
        administratorVaccinationsNumberLabel->setObjectName(QString::fromUtf8("administratorVaccinationsNumberLabel"));

        administratorDogFormLayout->setWidget(3, QFormLayout::LabelRole, administratorVaccinationsNumberLabel);

        administratorVaccinationsNumberLineEdit = new QLineEdit(administratorStackedWidgetPage);
        administratorVaccinationsNumberLineEdit->setObjectName(QString::fromUtf8("administratorVaccinationsNumberLineEdit"));

        administratorDogFormLayout->setWidget(3, QFormLayout::FieldRole, administratorVaccinationsNumberLineEdit);

        administratorPhotographLabel = new QLabel(administratorStackedWidgetPage);
        administratorPhotographLabel->setObjectName(QString::fromUtf8("administratorPhotographLabel"));

        administratorDogFormLayout->setWidget(4, QFormLayout::LabelRole, administratorPhotographLabel);

        administratorPhotographLineEdit = new QLineEdit(administratorStackedWidgetPage);
        administratorPhotographLineEdit->setObjectName(QString::fromUtf8("administratorPhotographLineEdit"));

        administratorDogFormLayout->setWidget(4, QFormLayout::FieldRole, administratorPhotographLineEdit);


        administratorVerticalLayout->addLayout(administratorDogFormLayout);

        administratorPushButtonsHorizontalLayout = new QHBoxLayout();
        administratorPushButtonsHorizontalLayout->setSpacing(6);
        administratorPushButtonsHorizontalLayout->setObjectName(QString::fromUtf8("administratorPushButtonsHorizontalLayout"));
        administratorAddPushButton = new QPushButton(administratorStackedWidgetPage);
        administratorAddPushButton->setObjectName(QString::fromUtf8("administratorAddPushButton"));

        administratorPushButtonsHorizontalLayout->addWidget(administratorAddPushButton);

        administratorUpdatePushButton = new QPushButton(administratorStackedWidgetPage);
        administratorUpdatePushButton->setObjectName(QString::fromUtf8("administratorUpdatePushButton"));

        administratorPushButtonsHorizontalLayout->addWidget(administratorUpdatePushButton);

        administratorDeletePushButton = new QPushButton(administratorStackedWidgetPage);
        administratorDeletePushButton->setObjectName(QString::fromUtf8("administratorDeletePushButton"));

        administratorPushButtonsHorizontalLayout->addWidget(administratorDeletePushButton);


        administratorVerticalLayout->addLayout(administratorPushButtonsHorizontalLayout);

        actionHorizontalLayout = new QHBoxLayout();
        actionHorizontalLayout->setSpacing(6);
        actionHorizontalLayout->setObjectName(QString::fromUtf8("actionHorizontalLayout"));
        undoPushButton = new QPushButton(administratorStackedWidgetPage);
        undoPushButton->setObjectName(QString::fromUtf8("undoPushButton"));

        actionHorizontalLayout->addWidget(undoPushButton);

        redoPushButton = new QPushButton(administratorStackedWidgetPage);
        redoPushButton->setObjectName(QString::fromUtf8("redoPushButton"));

        actionHorizontalLayout->addWidget(redoPushButton);


        administratorVerticalLayout->addLayout(actionHorizontalLayout);

        administratorFilePathHorizontalLayout = new QHBoxLayout();
        administratorFilePathHorizontalLayout->setSpacing(6);
        administratorFilePathHorizontalLayout->setObjectName(QString::fromUtf8("administratorFilePathHorizontalLayout"));
        administratorFilePathLineEdit = new QLineEdit(administratorStackedWidgetPage);
        administratorFilePathLineEdit->setObjectName(QString::fromUtf8("administratorFilePathLineEdit"));

        administratorFilePathHorizontalLayout->addWidget(administratorFilePathLineEdit);

        administratorSetFilePathPushButton = new QPushButton(administratorStackedWidgetPage);
        administratorSetFilePathPushButton->setObjectName(QString::fromUtf8("administratorSetFilePathPushButton"));

        administratorFilePathHorizontalLayout->addWidget(administratorSetFilePathPushButton);


        administratorVerticalLayout->addLayout(administratorFilePathHorizontalLayout);


        administratorHorizontalLayout->addLayout(administratorVerticalLayout);

        administratorUserModePushButton = new QPushButton(administratorStackedWidgetPage);
        administratorUserModePushButton->setObjectName(QString::fromUtf8("administratorUserModePushButton"));

        administratorHorizontalLayout->addWidget(administratorUserModePushButton);


        horizontalLayout->addLayout(administratorHorizontalLayout);

        mainStackedWidget->addWidget(administratorStackedWidgetPage);
        userStackedWidgetPage = new QWidget();
        userStackedWidgetPage->setObjectName(QString::fromUtf8("userStackedWidgetPage"));
        horizontalLayout_2 = new QHBoxLayout(userStackedWidgetPage);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        userHorizontalLayout = new QHBoxLayout();
        userHorizontalLayout->setSpacing(6);
        userHorizontalLayout->setObjectName(QString::fromUtf8("userHorizontalLayout"));
        userVerticalLayout = new QVBoxLayout();
        userVerticalLayout->setSpacing(6);
        userVerticalLayout->setObjectName(QString::fromUtf8("userVerticalLayout"));
        userMatchingDogsVerticalLayout = new QVBoxLayout();
        userMatchingDogsVerticalLayout->setSpacing(6);
        userMatchingDogsVerticalLayout->setObjectName(QString::fromUtf8("userMatchingDogsVerticalLayout"));
        userMatchingDogsLabel = new QLabel(userStackedWidgetPage);
        userMatchingDogsLabel->setObjectName(QString::fromUtf8("userMatchingDogsLabel"));

        userMatchingDogsVerticalLayout->addWidget(userMatchingDogsLabel);

        userMatchingDogsListWidget = new QListWidget(userStackedWidgetPage);
        userMatchingDogsListWidget->setObjectName(QString::fromUtf8("userMatchingDogsListWidget"));

        userMatchingDogsVerticalLayout->addWidget(userMatchingDogsListWidget);


        userVerticalLayout->addLayout(userMatchingDogsVerticalLayout);

        userNextHorizontalLayout = new QHBoxLayout();
        userNextHorizontalLayout->setSpacing(6);
        userNextHorizontalLayout->setObjectName(QString::fromUtf8("userNextHorizontalLayout"));
        userNextLineEdit = new QLineEdit(userStackedWidgetPage);
        userNextLineEdit->setObjectName(QString::fromUtf8("userNextLineEdit"));

        userNextHorizontalLayout->addWidget(userNextLineEdit);

        userNextPushButton = new QPushButton(userStackedWidgetPage);
        userNextPushButton->setObjectName(QString::fromUtf8("userNextPushButton"));

        userNextHorizontalLayout->addWidget(userNextPushButton);


        userVerticalLayout->addLayout(userNextHorizontalLayout);

        userFilterVerticalLayout = new QVBoxLayout();
        userFilterVerticalLayout->setSpacing(6);
        userFilterVerticalLayout->setObjectName(QString::fromUtf8("userFilterVerticalLayout"));
        userFilterFormLayout = new QFormLayout();
        userFilterFormLayout->setSpacing(6);
        userFilterFormLayout->setObjectName(QString::fromUtf8("userFilterFormLayout"));
        userBreedLabel = new QLabel(userStackedWidgetPage);
        userBreedLabel->setObjectName(QString::fromUtf8("userBreedLabel"));

        userFilterFormLayout->setWidget(0, QFormLayout::LabelRole, userBreedLabel);

        userBreedLineEdit = new QLineEdit(userStackedWidgetPage);
        userBreedLineEdit->setObjectName(QString::fromUtf8("userBreedLineEdit"));

        userFilterFormLayout->setWidget(0, QFormLayout::FieldRole, userBreedLineEdit);

        userVaccinationsNumberLabel = new QLabel(userStackedWidgetPage);
        userVaccinationsNumberLabel->setObjectName(QString::fromUtf8("userVaccinationsNumberLabel"));

        userFilterFormLayout->setWidget(1, QFormLayout::LabelRole, userVaccinationsNumberLabel);

        userVaccinationsNumberLineEdit = new QLineEdit(userStackedWidgetPage);
        userVaccinationsNumberLineEdit->setObjectName(QString::fromUtf8("userVaccinationsNumberLineEdit"));

        userFilterFormLayout->setWidget(1, QFormLayout::FieldRole, userVaccinationsNumberLineEdit);


        userFilterVerticalLayout->addLayout(userFilterFormLayout);

        userFilterPushButton = new QPushButton(userStackedWidgetPage);
        userFilterPushButton->setObjectName(QString::fromUtf8("userFilterPushButton"));

        userFilterVerticalLayout->addWidget(userFilterPushButton);

        userSavedDogsVerticalLayout = new QVBoxLayout();
        userSavedDogsVerticalLayout->setSpacing(6);
        userSavedDogsVerticalLayout->setObjectName(QString::fromUtf8("userSavedDogsVerticalLayout"));
        userMylistHorizontalLayout = new QHBoxLayout();
        userMylistHorizontalLayout->setSpacing(6);
        userMylistHorizontalLayout->setObjectName(QString::fromUtf8("userMylistHorizontalLayout"));
        userSavedDogsLabel = new QLabel(userStackedWidgetPage);
        userSavedDogsLabel->setObjectName(QString::fromUtf8("userSavedDogsLabel"));

        userMylistHorizontalLayout->addWidget(userSavedDogsLabel);

        userMylitsPushButton = new QPushButton(userStackedWidgetPage);
        userMylitsPushButton->setObjectName(QString::fromUtf8("userMylitsPushButton"));

        userMylistHorizontalLayout->addWidget(userMylitsPushButton);


        userSavedDogsVerticalLayout->addLayout(userMylistHorizontalLayout);

        userSavedDogsListWidget = new QListWidget(userStackedWidgetPage);
        userSavedDogsListWidget->setObjectName(QString::fromUtf8("userSavedDogsListWidget"));

        userSavedDogsVerticalLayout->addWidget(userSavedDogsListWidget);


        userFilterVerticalLayout->addLayout(userSavedDogsVerticalLayout);


        userVerticalLayout->addLayout(userFilterVerticalLayout);

        userSaveHorizontalLayout = new QHBoxLayout();
        userSaveHorizontalLayout->setSpacing(6);
        userSaveHorizontalLayout->setObjectName(QString::fromUtf8("userSaveHorizontalLayout"));
        userNameLabel = new QLabel(userStackedWidgetPage);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));

        userSaveHorizontalLayout->addWidget(userNameLabel);

        userNameLineEdit = new QLineEdit(userStackedWidgetPage);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));

        userSaveHorizontalLayout->addWidget(userNameLineEdit);

        userSavePushButton = new QPushButton(userStackedWidgetPage);
        userSavePushButton->setObjectName(QString::fromUtf8("userSavePushButton"));

        userSaveHorizontalLayout->addWidget(userSavePushButton);


        userVerticalLayout->addLayout(userSaveHorizontalLayout);

        userFilePathVerticalLayout = new QVBoxLayout();
        userFilePathVerticalLayout->setSpacing(6);
        userFilePathVerticalLayout->setObjectName(QString::fromUtf8("userFilePathVerticalLayout"));
        userSetFilePathHorizontalLayout = new QHBoxLayout();
        userSetFilePathHorizontalLayout->setSpacing(6);
        userSetFilePathHorizontalLayout->setObjectName(QString::fromUtf8("userSetFilePathHorizontalLayout"));
        userFilePathLineEdit = new QLineEdit(userStackedWidgetPage);
        userFilePathLineEdit->setObjectName(QString::fromUtf8("userFilePathLineEdit"));

        userSetFilePathHorizontalLayout->addWidget(userFilePathLineEdit);

        userSetFilePathPushButton = new QPushButton(userStackedWidgetPage);
        userSetFilePathPushButton->setObjectName(QString::fromUtf8("userSetFilePathPushButton"));

        userSetFilePathHorizontalLayout->addWidget(userSetFilePathPushButton);


        userFilePathVerticalLayout->addLayout(userSetFilePathHorizontalLayout);

        userOpenFilePushButton = new QPushButton(userStackedWidgetPage);
        userOpenFilePushButton->setObjectName(QString::fromUtf8("userOpenFilePushButton"));

        userFilePathVerticalLayout->addWidget(userOpenFilePushButton);


        userVerticalLayout->addLayout(userFilePathVerticalLayout);


        userHorizontalLayout->addLayout(userVerticalLayout);

        userAdministratorModePushButton = new QPushButton(userStackedWidgetPage);
        userAdministratorModePushButton->setObjectName(QString::fromUtf8("userAdministratorModePushButton"));

        userHorizontalLayout->addWidget(userAdministratorModePushButton);


        horizontalLayout_2->addLayout(userHorizontalLayout);

        mainStackedWidget->addWidget(userStackedWidgetPage);

        horizontalLayout_3->addWidget(mainStackedWidget);

        GUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GUIClass->setStatusBar(statusBar);

        retranslateUi(GUIClass);

        mainStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GUIClass)
    {
        GUIClass->setWindowTitle(QApplication::translate("GUIClass", "GUI", nullptr));
        administratorNameLabel->setText(QApplication::translate("GUIClass", "Name: ", nullptr));
        administratorBreedLabel->setText(QApplication::translate("GUIClass", "Breed: ", nullptr));
        administratorBirthDateLabel->setText(QApplication::translate("GUIClass", "Birth date: ", nullptr));
        administratorVaccinationsNumberLabel->setText(QApplication::translate("GUIClass", "Number of vaccinations: ", nullptr));
        administratorPhotographLabel->setText(QApplication::translate("GUIClass", "Photograph: ", nullptr));
        administratorAddPushButton->setText(QApplication::translate("GUIClass", "Add", nullptr));
        administratorUpdatePushButton->setText(QApplication::translate("GUIClass", "Update", nullptr));
        administratorDeletePushButton->setText(QApplication::translate("GUIClass", "Delete", nullptr));
        undoPushButton->setText(QApplication::translate("GUIClass", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        undoPushButton->setShortcut(QApplication::translate("GUIClass", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        redoPushButton->setText(QApplication::translate("GUIClass", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        redoPushButton->setShortcut(QApplication::translate("GUIClass", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        administratorSetFilePathPushButton->setText(QApplication::translate("GUIClass", "Set file path", nullptr));
        administratorUserModePushButton->setText(QApplication::translate("GUIClass", "USER MODE", nullptr));
        userMatchingDogsLabel->setText(QApplication::translate("GUIClass", "MATCHING DOGS: ", nullptr));
        userNextPushButton->setText(QApplication::translate("GUIClass", "Next", nullptr));
        userBreedLabel->setText(QApplication::translate("GUIClass", "Breed: ", nullptr));
        userVaccinationsNumberLabel->setText(QApplication::translate("GUIClass", "Number of vaccinations: ", nullptr));
        userFilterPushButton->setText(QApplication::translate("GUIClass", "Filter", nullptr));
        userSavedDogsLabel->setText(QApplication::translate("GUIClass", "SAVED DOGS: ", nullptr));
        userMylitsPushButton->setText(QApplication::translate("GUIClass", "My list", nullptr));
        userNameLabel->setText(QApplication::translate("GUIClass", "Name: ", nullptr));
        userSavePushButton->setText(QApplication::translate("GUIClass", "Save", nullptr));
        userSetFilePathPushButton->setText(QApplication::translate("GUIClass", "Set file path", nullptr));
        userOpenFilePushButton->setText(QApplication::translate("GUIClass", "Open file", nullptr));
        userAdministratorModePushButton->setText(QApplication::translate("GUIClass", "ADMINISTRATOR MODE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUIClass: public Ui_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
