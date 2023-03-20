/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QGroupBox *groupBox_18;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_20;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *minButton_3;
    QPushButton *maxButton_3;
    QPushButton *closeButton_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_31;
    QGroupBox *groupBox_21;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_33;
    QPushButton *loadfile_button;
    QLineEdit *file_edit;
    QHBoxLayout *horizontalLayout_34;
    QPushButton *choosemodel_button;
    QLineEdit *model_edit;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_203;
    QVBoxLayout *verticalLayout_21;
    QLabel *Videolabel;
    QHBoxLayout *horizontalLayout_32;
    QPushButton *stopButton_3;
    QPushButton *runButton_3;
    QProgressBar *progressBar_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QStringLiteral("Camera"));
        Camera->resize(1395, 765);
        groupBox_18 = new QGroupBox(Camera);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setGeometry(QRect(0, 0, 1394, 762));
        groupBox_18->setStyleSheet(QLatin1String("#groupBox_18{\n"
"border: 0px solid #42adff;\n"
"border-radius:5px;}"));
        verticalLayout_15 = new QVBoxLayout(groupBox_18);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        groupBox_20 = new QGroupBox(groupBox_18);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        groupBox_20->setMinimumSize(QSize(0, 45));
        groupBox_20->setMaximumSize(QSize(16777215, 45));
        groupBox_20->setStyleSheet(QLatin1String("#groupBox{\n"
"background-color: rgba(75, 75, 75, 200);\n"
"border: 0px solid #42adff;\n"
"border-left: 0px solid rgba(29, 83, 185, 255);\n"
"border-right: 0px solid rgba(29, 83, 185, 255);\n"
"border-bottom: 1px solid rgba(200, 200, 200,100);\n"
";\n"
"border-radius:0px;}"));
        horizontalLayout_29 = new QHBoxLayout(groupBox_20);
        horizontalLayout_29->setSpacing(0);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(-1, 0, -1, 0);
        label_21 = new QLabel(groupBox_20);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(40, 40));
        label_21->setMaximumSize(QSize(40, 40));
        label_21->setStyleSheet(QStringLiteral("image: url(:/img/icon/profile.png);"));

        horizontalLayout_29->addWidget(label_21);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(0);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        minButton_3 = new QPushButton(groupBox_20);
        minButton_3->setObjectName(QStringLiteral("minButton_3"));
        minButton_3->setMinimumSize(QSize(50, 28));
        minButton_3->setMaximumSize(QSize(50, 28));
        minButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 0);}\n"
"QPushButton::focus{outline: none;}\n"
"QPushButton::hover {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 150);\n"
"background-image:url{:/icon/min.png};}"));

        horizontalLayout_30->addWidget(minButton_3);

        maxButton_3 = new QPushButton(groupBox_20);
        maxButton_3->setObjectName(QStringLiteral("maxButton_3"));
        maxButton_3->setMinimumSize(QSize(50, 28));
        maxButton_3->setMaximumSize(QSize(50, 28));
        maxButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 0);}\n"
"QPushButton::focus{outline: none;}\n"
"QPushButton::hover {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 150);\n"
"background-image: url(:/icon/max.png);}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon/\346\255\243\346\226\271\345\275\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/img/icon/\350\277\230\345\216\237.png"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8(":/img/icon/\350\277\230\345\216\237.png"), QSize(), QIcon::Selected, QIcon::On);
        maxButton_3->setIcon(icon);
        maxButton_3->setCheckable(true);

        horizontalLayout_30->addWidget(maxButton_3);

        closeButton_3 = new QPushButton(groupBox_20);
        closeButton_3->setObjectName(QStringLiteral("closeButton_3"));
        closeButton_3->setMinimumSize(QSize(50, 28));
        closeButton_3->setMaximumSize(QSize(50, 28));
        closeButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 0);}\n"
"QPushButton::focus{outline: none;}\n"
"QPushButton::hover {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 150);\n"
"background-image:url{:/icon/close.png}}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icon/\345\205\263\351\227\255.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton_3->setIcon(icon1);

        horizontalLayout_30->addWidget(closeButton_3);


        horizontalLayout_29->addLayout(horizontalLayout_30);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_3);


        verticalLayout_15->addWidget(groupBox_20);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(0);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        groupBox_21 = new QGroupBox(groupBox_18);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        groupBox_21->setMinimumSize(QSize(320, 0));
        groupBox_21->setMaximumSize(QSize(320, 16777215));
        groupBox_21->setStyleSheet(QLatin1String("#groupBox_8{\n"
"background-color: rgba(75, 75, 75, 200);\n"
"border: 0px solid #42adff;\n"
"border-radius:0px;}\n"
""));
        verticalLayout_16 = new QVBoxLayout(groupBox_21);
        verticalLayout_16->setSpacing(11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        loadfile_button = new QPushButton(groupBox_21);
        loadfile_button->setObjectName(QStringLiteral("loadfile_button"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loadfile_button->sizePolicy().hasHeightForWidth());
        loadfile_button->setSizePolicy(sizePolicy);
        loadfile_button->setMinimumSize(QSize(115, 0));

        horizontalLayout_33->addWidget(loadfile_button);

        file_edit = new QLineEdit(groupBox_21);
        file_edit->setObjectName(QStringLiteral("file_edit"));

        horizontalLayout_33->addWidget(file_edit);


        verticalLayout_16->addLayout(horizontalLayout_33);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        choosemodel_button = new QPushButton(groupBox_21);
        choosemodel_button->setObjectName(QStringLiteral("choosemodel_button"));

        horizontalLayout_34->addWidget(choosemodel_button);

        model_edit = new QLineEdit(groupBox_21);
        model_edit->setObjectName(QStringLiteral("model_edit"));

        horizontalLayout_34->addWidget(model_edit);


        verticalLayout_16->addLayout(horizontalLayout_34);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_2);


        horizontalLayout_31->addWidget(groupBox_21);

        groupBox_203 = new QGroupBox(groupBox_18);
        groupBox_203->setObjectName(QStringLiteral("groupBox_203"));
        groupBox_203->setStyleSheet(QLatin1String("#groupBox_201{\n"
"background-color: rgba(95, 95, 95, 200);\n"
"border: 0px solid #42adff;\n"
"border-left: 1px solid rgba(200, 200, 200,100);\n"
"border-right: 0px solid rgba(29, 83, 185, 255);\n"
"border-radius:0px;}"));
        verticalLayout_21 = new QVBoxLayout(groupBox_203);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        Videolabel = new QLabel(groupBox_203);
        Videolabel->setObjectName(QStringLiteral("Videolabel"));
        Videolabel->setMinimumSize(QSize(300, 600));

        verticalLayout_21->addWidget(Videolabel);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(0);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, -1, -1);
        stopButton_3 = new QPushButton(groupBox_203);
        stopButton_3->setObjectName(QStringLiteral("stopButton_3"));
        stopButton_3->setMinimumSize(QSize(40, 40));
        stopButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 0);\n"
"}\n"
"QPushButton::focus{outline: none;}\n"
"QPushButton::hover {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 150);}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../../../stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton_3->setIcon(icon2);
        stopButton_3->setIconSize(QSize(30, 30));

        horizontalLayout_32->addWidget(stopButton_3);

        runButton_3 = new QPushButton(groupBox_203);
        runButton_3->setObjectName(QStringLiteral("runButton_3"));
        runButton_3->setMinimumSize(QSize(40, 40));
        runButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 0);\n"
"}\n"
"QPushButton::focus{outline: none;}\n"
"QPushButton::hover {\n"
"border-style: solid;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background-color: rgba(223, 223, 223, 150);}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../../../play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/img/icon/\346\232\202\345\201\234.png"), QSize(), QIcon::Normal, QIcon::On);
        icon3.addFile(QString::fromUtf8(":/img/icon/\350\277\220\350\241\214.png"), QSize(), QIcon::Disabled, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/img/icon/\346\232\202\345\201\234.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon3.addFile(QString::fromUtf8(":/img/icon/\350\277\220\350\241\214.png"), QSize(), QIcon::Active, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/img/icon/\346\232\202\345\201\234.png"), QSize(), QIcon::Active, QIcon::On);
        icon3.addFile(QString::fromUtf8(":/img/icon/\350\277\220\350\241\214.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/img/icon/\346\232\202\345\201\234.png"), QSize(), QIcon::Selected, QIcon::On);
        runButton_3->setIcon(icon3);
        runButton_3->setIconSize(QSize(30, 30));
        runButton_3->setCheckable(true);

        horizontalLayout_32->addWidget(runButton_3);

        progressBar_3 = new QProgressBar(groupBox_203);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setMaximumSize(QSize(16777215, 5));
        progressBar_3->setStyleSheet(QLatin1String("QProgressBar{ color: rgb(255, 255, 255); font:12pt; border-radius:2px; text-align:center; border:none; background-color: rgba(215, 215, 215,100);} \n"
"QProgressBar:chunk{ border-radius:0px; background: rgba(55, 55, 55, 200);}"));
        progressBar_3->setMaximum(1000);
        progressBar_3->setValue(0);
        progressBar_3->setTextVisible(false);

        horizontalLayout_32->addWidget(progressBar_3);


        verticalLayout_21->addLayout(horizontalLayout_32);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer);


        horizontalLayout_31->addWidget(groupBox_203);


        verticalLayout_15->addLayout(horizontalLayout_31);


        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QWidget *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "Form", Q_NULLPTR));
        groupBox_18->setTitle(QString());
        groupBox_20->setTitle(QString());
        label_21->setText(QString());
        minButton_3->setText(QString());
        maxButton_3->setText(QString());
        closeButton_3->setText(QString());
        groupBox_21->setTitle(QString());
        loadfile_button->setText(QApplication::translate("Camera", "load file", Q_NULLPTR));
        choosemodel_button->setText(QApplication::translate("Camera", "Choose Model", Q_NULLPTR));
        groupBox_203->setTitle(QString());
        Videolabel->setText(QApplication::translate("Camera", "TextLabel", Q_NULLPTR));
        stopButton_3->setText(QString());
        runButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
