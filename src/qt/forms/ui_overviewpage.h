/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QFrame *frame_BG;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_Header;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *labelOverviewHeaderLeft;
    QSpacerItem *horizontalSpacer_Header;
    QLabel *labelOverviewHeaderRight;
    QFrame *frame_Content;
    QVBoxLayout *verticalLayout_Content;
    QHBoxLayout *horizontalLayout_Content;
    QVBoxLayout *verticalLayout_left;
    QFrame *frameObfuscation;
    QVBoxLayout *verticalLayout;
    QFrame *frame_Balances;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_Balance;
    QGridLayout *gridLayout;
    QLabel *labelSpendable;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchPending;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QLabel *labelWatchImmature;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_banner;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_Links;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_Links_1;
    QLabel *label_Links_title;
    QSpacerItem *horizontalSpacer_Links_1;
    QFrame *line_Links;
    QLabel *labelLinks1;
    QLabel *labelLinksUrl1;
    QLabel *labelLinks2;
    QLabel *labelLinksUrl2;
    QLabel *labelLinks3;
    QLabel *labelLinksUrl3;
    QLabel *labelLinks4;
    QLabel *labelLinksUrl4;
    QSpacerItem *horizontalSpacer_Links_2;
    QLabel *labelLinks5;
    QLabel *labelLinksUrl5;
    QLabel *labelLinks6;
    QLabel *labelLinksUrl6;
    QLabel *labelLinks7;
    QLabel *labelLinksUrl7;
    QLabel *labelLinks8;
    QLabel *labelLinksUrl8;
    QLabel *labelLinks8_2;
    QLabel *labelLinksUrl9;
    QLabel *labelLinksUrl9_2;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelLinks1_2;
    QVBoxLayout *verticalLayout_right;
    QFrame *frame_RecentTransactions;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelAlerts;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(978, 841);
        OverviewPage->setMinimumSize(QSize(960, 682));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        OverviewPage->setFont(font);
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(-1, -1, 9, -1);
        frame_BG = new QFrame(OverviewPage);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        frame_BG->setMinimumSize(QSize(850, 610));
        frame_BG->setMaximumSize(QSize(16777215, 16777215));
        frame_BG->setFrameShape(QFrame::StyledPanel);
        frame_BG->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_BG);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 6);
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        verticalLayout_Master->setContentsMargins(0, 0, 0, 0);
        frame_Header = new QFrame(frame_BG);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        frame_Header->setFrameShape(QFrame::NoFrame);
        verticalLayout_Header = new QVBoxLayout(frame_Header);
        verticalLayout_Header->setObjectName(QStringLiteral("verticalLayout_Header"));
        verticalLayout_Header->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setSpacing(6);
        horizontalLayout_Header->setObjectName(QStringLiteral("horizontalLayout_Header"));
        labelOverviewHeaderLeft = new QLabel(frame_Header);
        labelOverviewHeaderLeft->setObjectName(QStringLiteral("labelOverviewHeaderLeft"));
        labelOverviewHeaderLeft->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderLeft->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        labelOverviewHeaderLeft->setFont(font1);
        labelOverviewHeaderLeft->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_Header->addWidget(labelOverviewHeaderLeft);

        horizontalSpacer_Header = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer_Header);

        labelOverviewHeaderRight = new QLabel(frame_Header);
        labelOverviewHeaderRight->setObjectName(QStringLiteral("labelOverviewHeaderRight"));
        labelOverviewHeaderRight->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderRight->setMaximumSize(QSize(16777215, 60));
        QFont font2;
        font2.setPointSize(14);
        labelOverviewHeaderRight->setFont(font2);
        labelOverviewHeaderRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_Header->addWidget(labelOverviewHeaderRight);

        horizontalLayout_Header->setStretch(0, 1);
        horizontalLayout_Header->setStretch(2, 1);

        verticalLayout_Header->addLayout(horizontalLayout_Header);


        verticalLayout_Master->addWidget(frame_Header);

        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        frame_Content->setFrameShape(QFrame::NoFrame);
        verticalLayout_Content = new QVBoxLayout(frame_Content);
        verticalLayout_Content->setObjectName(QStringLiteral("verticalLayout_Content"));
        verticalLayout_Content->setContentsMargins(6, 0, 6, 0);
        horizontalLayout_Content = new QHBoxLayout();
        horizontalLayout_Content->setSpacing(6);
        horizontalLayout_Content->setObjectName(QStringLiteral("horizontalLayout_Content"));
        verticalLayout_left = new QVBoxLayout();
        verticalLayout_left->setObjectName(QStringLiteral("verticalLayout_left"));
        frameObfuscation = new QFrame(frame_Content);
        frameObfuscation->setObjectName(QStringLiteral("frameObfuscation"));
        frameObfuscation->setMinimumSize(QSize(0, 0));
        frameObfuscation->setFrameShape(QFrame::StyledPanel);
        frameObfuscation->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameObfuscation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_Balances = new QFrame(frameObfuscation);
        frame_Balances->setObjectName(QStringLiteral("frame_Balances"));
        frame_Balances->setFrameShape(QFrame::StyledPanel);
        frame_Balances->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_Balances);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame_Balances);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial Black"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(10);
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("font: 87 10pt \"Arial Black\";"));

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame_Balances);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 3);

        line_Balance = new QFrame(frame_Balances);
        line_Balance->setObjectName(QStringLiteral("line_Balance"));
        line_Balance->setMinimumSize(QSize(0, 1));
        line_Balance->setMaximumSize(QSize(16777215, 1));
        line_Balance->setFrameShape(QFrame::HLine);
        line_Balance->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_Balance, 1, 0, 1, 3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelSpendable = new QLabel(frame_Balances);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelWatchonly = new QLabel(frame_Balances);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame_Balances);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));
        labelBalanceText->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame_Balances);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial Black"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(10);
        labelBalance->setFont(font4);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelBalance->setText(QString::fromUtf8("0.000\303\242\342\202\254\342\200\260000\303\242\342\202\254\342\200\26000 HCC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame_Balances);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font4);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\303\242\342\202\254\342\200\260000\303\242\342\202\254\342\200\26000 HCC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame_Balances);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));
        labelPendingText->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelUnconfirmed = new QLabel(frame_Balances);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font4);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\303\242\342\202\254\342\200\260000\303\242\342\202\254\342\200\26000 HCC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchPending = new QLabel(frame_Balances);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font4);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelWatchPending->setText(QString::fromUtf8("0.000\303\242\342\202\254\342\200\260000\303\242\342\202\254\342\200\26000 HCC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelImmatureText = new QLabel(frame_Balances);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));
        labelImmatureText->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelImmature = new QLabel(frame_Balances);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font4);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelImmature->setText(QString::fromUtf8("0.000\303\242\342\202\254\342\200\260000\303\242\342\202\254\342\200\26000 HCC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        labelWatchImmature = new QLabel(frame_Balances);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font4);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelWatchImmature->setText(QString::fromUtf8("0.000\303\242\342\202\254\342\200\260000\303\242\342\202\254\342\200\26000 HCC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        labelTotalText = new QLabel(frame_Balances);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        labelTotalText->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout->addWidget(labelTotalText, 4, 0, 1, 1);

        labelTotal = new QLabel(frame_Balances);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font4);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelTotal->setText(QString::fromUtf8("0.000\303\242\342\202\254\342\200\260000\303\242\342\202\254\342\200\26000 HCC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 4, 1, 1, 1);

        labelWatchTotal = new QLabel(frame_Balances);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font4);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));
        labelWatchTotal->setText(QString::fromUtf8("0.000\303\242\342\202\254\342\200\260000\303\242\342\202\254\342\200\26000 HCC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 4, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 4, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 3);

        label_banner = new QLabel(frame_Balances);
        label_banner->setObjectName(QStringLiteral("label_banner"));
        label_banner->setStyleSheet(QStringLiteral(""));
        label_banner->setFrameShape(QFrame::Box);
        label_banner->setFrameShadow(QFrame::Raised);
        label_banner->setTextFormat(Qt::AutoText);
        label_banner->setPixmap(QPixmap(QString::fromUtf8("../../../../../../Desktop/300x300northernvaultwatch.gif")));
        label_banner->setScaledContents(true);
        label_banner->setOpenExternalLinks(false);
        label_banner->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_3->addWidget(label_banner, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 1, 1, 1);


        verticalLayout->addWidget(frame_Balances);

        frame_Links = new QFrame(frameObfuscation);
        frame_Links->setObjectName(QStringLiteral("frame_Links"));
        frame_Links->setFrameShape(QFrame::StyledPanel);
        frame_Links->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_Links);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_Links_1 = new QHBoxLayout();
        horizontalLayout_Links_1->setObjectName(QStringLiteral("horizontalLayout_Links_1"));
        label_Links_title = new QLabel(frame_Links);
        label_Links_title->setObjectName(QStringLiteral("label_Links_title"));
        label_Links_title->setMinimumSize(QSize(0, 20));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        label_Links_title->setFont(font5);

        horizontalLayout_Links_1->addWidget(label_Links_title);

        horizontalSpacer_Links_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Links_1->addItem(horizontalSpacer_Links_1);


        gridLayout_2->addLayout(horizontalLayout_Links_1, 0, 0, 1, 1);

        line_Links = new QFrame(frame_Links);
        line_Links->setObjectName(QStringLiteral("line_Links"));
        line_Links->setMinimumSize(QSize(0, 1));
        line_Links->setMaximumSize(QSize(16777215, 1));
        line_Links->setFrameShape(QFrame::HLine);
        line_Links->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_Links, 1, 0, 1, 3);

        labelLinks1 = new QLabel(frame_Links);
        labelLinks1->setObjectName(QStringLiteral("labelLinks1"));
        labelLinks1->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks1, 2, 0, 1, 1);

        labelLinksUrl1 = new QLabel(frame_Links);
        labelLinksUrl1->setObjectName(QStringLiteral("labelLinksUrl1"));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        labelLinksUrl1->setFont(font6);
        labelLinksUrl1->setText(QStringLiteral("<a href=\"https://127.0.0.1/\">https://127.0.0.1/</a>"));
        labelLinksUrl1->setTextFormat(Qt::RichText);
        labelLinksUrl1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl1->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl1, 2, 1, 1, 1);

        labelLinks2 = new QLabel(frame_Links);
        labelLinks2->setObjectName(QStringLiteral("labelLinks2"));
        labelLinks2->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks2, 3, 0, 1, 1);

        labelLinksUrl2 = new QLabel(frame_Links);
        labelLinksUrl2->setObjectName(QStringLiteral("labelLinksUrl2"));
        labelLinksUrl2->setFont(font6);
        labelLinksUrl2->setText(QStringLiteral("<a href=\"https://discord.gg/rwcpyy2\">https://discord.gg/rwcpyy2</a>"));
        labelLinksUrl2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl2->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl2, 3, 1, 1, 1);

        labelLinks3 = new QLabel(frame_Links);
        labelLinks3->setObjectName(QStringLiteral("labelLinks3"));
        labelLinks3->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks3, 4, 0, 1, 1);

        labelLinksUrl3 = new QLabel(frame_Links);
        labelLinksUrl3->setObjectName(QStringLiteral("labelLinksUrl3"));
        labelLinksUrl3->setFont(font6);
        labelLinksUrl3->setText(QStringLiteral("<a href=\"https://github.com/Human-Charity-Coin/HCC-wallet\">https://github.com/Human-Charity-Coin/HCC-wallet</a>"));
        labelLinksUrl3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl3->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl3, 4, 1, 1, 1);

        labelLinks4 = new QLabel(frame_Links);
        labelLinks4->setObjectName(QStringLiteral("labelLinks4"));
        labelLinks4->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks4, 5, 0, 1, 1);

        labelLinksUrl4 = new QLabel(frame_Links);
        labelLinksUrl4->setObjectName(QStringLiteral("labelLinksUrl4"));
        labelLinksUrl4->setFont(font6);
        labelLinksUrl4->setText(QStringLiteral("<a href=\"http://127.0.0.1/ \">http://127.0.0.1/ </a>"));
        labelLinksUrl4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl4->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl4, 5, 1, 1, 1);

        horizontalSpacer_Links_2 = new QSpacerItem(22, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_Links_2, 5, 3, 1, 1);

        labelLinks5 = new QLabel(frame_Links);
        labelLinks5->setObjectName(QStringLiteral("labelLinks5"));
        labelLinks5->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks5, 6, 0, 1, 1);

        labelLinksUrl5 = new QLabel(frame_Links);
        labelLinksUrl5->setObjectName(QStringLiteral("labelLinksUrl5"));
        labelLinksUrl5->setFont(font6);
        labelLinksUrl5->setText(QStringLiteral("<a href=\"https://nortexchange.com/\">https://nortexchange.com/</a>"));
        labelLinksUrl5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl5->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl5, 6, 1, 1, 1);

        labelLinks6 = new QLabel(frame_Links);
        labelLinks6->setObjectName(QStringLiteral("labelLinks6"));
        labelLinks6->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks6, 7, 0, 1, 1);

        labelLinksUrl6 = new QLabel(frame_Links);
        labelLinksUrl6->setObjectName(QStringLiteral("labelLinksUrl6"));
        labelLinksUrl6->setFont(font6);
        labelLinksUrl6->setText(QStringLiteral("<a href=\"northerncommunity1@gmail.com\">northerncommunity1@gmail.com</a>"));
        labelLinksUrl6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl6->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl6, 7, 1, 1, 1);

        labelLinks7 = new QLabel(frame_Links);
        labelLinks7->setObjectName(QStringLiteral("labelLinks7"));
        labelLinks7->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks7, 8, 0, 1, 1);

        labelLinksUrl7 = new QLabel(frame_Links);
        labelLinksUrl7->setObjectName(QStringLiteral("labelLinksUrl7"));
        labelLinksUrl7->setFont(font6);
        labelLinksUrl7->setText(QStringLiteral("<html><head/><body><p><a href=\"https://127.0.0.1/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://127.0.0.1/</span></a></p></body></html>"));
        labelLinksUrl7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl7->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl7, 8, 1, 1, 1);

        labelLinks8 = new QLabel(frame_Links);
        labelLinks8->setObjectName(QStringLiteral("labelLinks8"));
        labelLinks8->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks8, 9, 0, 1, 1);

        labelLinksUrl8 = new QLabel(frame_Links);
        labelLinksUrl8->setObjectName(QStringLiteral("labelLinksUrl8"));
        labelLinksUrl8->setFont(font6);
        labelLinksUrl8->setText(QStringLiteral("<html><head/><body><p><a href=\"https://127.0.0.1/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://127.0.0.1/</span></a></p></body></html>"));
        labelLinksUrl8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl8->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl8, 9, 1, 1, 2);

        labelLinks8_2 = new QLabel(frame_Links);
        labelLinks8_2->setObjectName(QStringLiteral("labelLinks8_2"));
        labelLinks8_2->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks8_2, 10, 0, 1, 1);

        labelLinksUrl9 = new QLabel(frame_Links);
        labelLinksUrl9->setObjectName(QStringLiteral("labelLinksUrl9"));
        labelLinksUrl9->setFont(font6);
        labelLinksUrl9->setText(QStringLiteral("<html><head/><body><p><a href=\"http://127.0.0.1/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://127.0.0.1/</span></a></p></body></html>"));
        labelLinksUrl9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl9->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl9, 10, 1, 1, 1);

        labelLinksUrl9_2 = new QLabel(frame_Links);
        labelLinksUrl9_2->setObjectName(QStringLiteral("labelLinksUrl9_2"));
        labelLinksUrl9_2->setFont(font6);
        labelLinksUrl9_2->setText(QStringLiteral("<html><head/><body><p><a href=\"https://127.0.0.1/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://127.0.0.1/</span></a></p></body></html>"));
        labelLinksUrl9_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl9_2->setOpenExternalLinks(true);

        gridLayout_2->addWidget(labelLinksUrl9_2, 11, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 12, 2, 1, 1);

        labelLinks1_2 = new QLabel(frame_Links);
        labelLinks1_2->setObjectName(QStringLiteral("labelLinks1_2"));
        labelLinks1_2->setStyleSheet(QStringLiteral("font: 87 9pt \"Arial Black\";"));

        gridLayout_2->addWidget(labelLinks1_2, 11, 0, 1, 1);


        verticalLayout->addWidget(frame_Links);


        verticalLayout_left->addWidget(frameObfuscation);

        verticalLayout_left->setStretch(0, 1);

        horizontalLayout_Content->addLayout(verticalLayout_left);

        verticalLayout_right = new QVBoxLayout();
        verticalLayout_right->setObjectName(QStringLiteral("verticalLayout_right"));
        frame_RecentTransactions = new QFrame(frame_Content);
        frame_RecentTransactions->setObjectName(QStringLiteral("frame_RecentTransactions"));
        frame_RecentTransactions->setMinimumSize(QSize(0, 0));
        frame_RecentTransactions->setFrameShape(QFrame::StyledPanel);
        frame_RecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout_1 = new QVBoxLayout(frame_RecentTransactions);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_RecentTransactions);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 20));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial Black"));
        font7.setPointSize(11);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(10);
        label_4->setFont(font7);
        label_4->setStyleSheet(QLatin1String("font: 87 11pt \"Arial Black\";\n"
"selection-color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_RecentTransactions);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_1->addLayout(horizontalLayout_2);

        line = new QFrame(frame_RecentTransactions);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 1));
        line->setMaximumSize(QSize(16777215, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_1->addWidget(line);

        listTransactions = new QListView(frame_RecentTransactions);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setMinimumSize(QSize(0, 0));
        listTransactions->setStyleSheet(QLatin1String("QListView { background: transparent; }\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_1->addWidget(listTransactions);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_2);

        labelAlerts = new QLabel(frame_RecentTransactions);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setMaximumSize(QSize(16777215, 16777215));
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        verticalLayout_1->addWidget(labelAlerts);


        verticalLayout_right->addWidget(frame_RecentTransactions);

        verticalLayout_right->setStretch(0, 1);

        horizontalLayout_Content->addLayout(verticalLayout_right);

        horizontalLayout_Content->setStretch(0, 1);
        horizontalLayout_Content->setStretch(1, 1);

        verticalLayout_Content->addLayout(horizontalLayout_Content);


        verticalLayout_Master->addWidget(frame_Content);

        verticalLayout_Master->setStretch(1, 1);

        verticalLayout_3->addLayout(verticalLayout_Master);

        verticalLayout_3->setStretch(0, 1);

        topLayout->addWidget(frame_BG);

        topLayout->setStretch(0, 1);

        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        labelOverviewHeaderLeft->setText(QApplication::translate("OverviewPage", "OVERVIEW", Q_NULLPTR));
        labelOverviewHeaderRight->setText(QString());
        label_5->setText(QApplication::translate("OverviewPage", "HCC Balance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the KYD network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotalText->setToolTip(QApplication::translate("OverviewPage", "Your current HCC balance, unconfirmed and immature transactions included", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current HCC balance, unconfirmed and immature transactions included", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_banner->setText(QString());
        label_Links_title->setText(QApplication::translate("OverviewPage", "Links", Q_NULLPTR));
        labelLinks1->setText(QApplication::translate("OverviewPage", "Website:", Q_NULLPTR));
        labelLinks2->setText(QApplication::translate("OverviewPage", "Discord:", Q_NULLPTR));
        labelLinks3->setText(QApplication::translate("OverviewPage", "GitHub:", Q_NULLPTR));
        labelLinks4->setText(QApplication::translate("OverviewPage", "Explorer:", Q_NULLPTR));
        labelLinks5->setText(QApplication::translate("OverviewPage", "Exchange:", Q_NULLPTR));
        labelLinks6->setText(QApplication::translate("OverviewPage", "Contact:", Q_NULLPTR));
        labelLinks7->setText(QApplication::translate("OverviewPage", "ROI:", Q_NULLPTR));
        labelLinks8->setText(QApplication::translate("OverviewPage", "MN Vs Staking:", Q_NULLPTR));
        labelLinks8_2->setText(QApplication::translate("OverviewPage", "Market Place:", Q_NULLPTR));
        labelLinks1_2->setText(QApplication::translate("OverviewPage", "Advertising:", Q_NULLPTR));
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the HCC network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelAlerts->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
