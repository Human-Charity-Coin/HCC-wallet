/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[55];
    char stringdata0[738];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 11), // "receivedURI"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "uri"
QT_MOC_LITERAL(4, 28, 16), // "requestedRestart"
QT_MOC_LITERAL(5, 45, 4), // "args"
QT_MOC_LITERAL(6, 50, 17), // "setNumConnections"
QT_MOC_LITERAL(7, 68, 5), // "count"
QT_MOC_LITERAL(8, 74, 12), // "setNumBlocks"
QT_MOC_LITERAL(9, 87, 13), // "handleRestart"
QT_MOC_LITERAL(10, 101, 7), // "message"
QT_MOC_LITERAL(11, 109, 5), // "title"
QT_MOC_LITERAL(12, 115, 5), // "style"
QT_MOC_LITERAL(13, 121, 5), // "bool*"
QT_MOC_LITERAL(14, 127, 3), // "ret"
QT_MOC_LITERAL(15, 131, 16), // "setStakingStatus"
QT_MOC_LITERAL(16, 148, 19), // "setEncryptionStatus"
QT_MOC_LITERAL(17, 168, 6), // "status"
QT_MOC_LITERAL(18, 175, 20), // "handlePaymentRequest"
QT_MOC_LITERAL(19, 196, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(20, 215, 9), // "recipient"
QT_MOC_LITERAL(21, 225, 19), // "incomingTransaction"
QT_MOC_LITERAL(22, 245, 4), // "date"
QT_MOC_LITERAL(23, 250, 4), // "unit"
QT_MOC_LITERAL(24, 255, 7), // "CAmount"
QT_MOC_LITERAL(25, 263, 6), // "amount"
QT_MOC_LITERAL(26, 270, 4), // "type"
QT_MOC_LITERAL(27, 275, 7), // "address"
QT_MOC_LITERAL(28, 283, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(29, 300, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(30, 316, 21), // "gotoBlockExplorerPage"
QT_MOC_LITERAL(31, 338, 18), // "gotoMasternodePage"
QT_MOC_LITERAL(32, 357, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(33, 378, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(34, 396, 4), // "addr"
QT_MOC_LITERAL(35, 401, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(36, 420, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(37, 441, 19), // "gotoMultiSendDialog"
QT_MOC_LITERAL(38, 461, 18), // "gotoMultisigCreate"
QT_MOC_LITERAL(39, 480, 17), // "gotoMultisigSpend"
QT_MOC_LITERAL(40, 498, 16), // "gotoMultisigSign"
QT_MOC_LITERAL(41, 515, 13), // "gotoBip38Tool"
QT_MOC_LITERAL(42, 529, 11), // "openClicked"
QT_MOC_LITERAL(43, 541, 14), // "optionsClicked"
QT_MOC_LITERAL(44, 556, 12), // "aboutClicked"
QT_MOC_LITERAL(45, 569, 22), // "showHelpMessageClicked"
QT_MOC_LITERAL(46, 592, 17), // "trayIconActivated"
QT_MOC_LITERAL(47, 610, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(48, 644, 6), // "reason"
QT_MOC_LITERAL(49, 651, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(50, 673, 13), // "fToggleHidden"
QT_MOC_LITERAL(51, 687, 12), // "toggleHidden"
QT_MOC_LITERAL(52, 700, 14), // "detectShutdown"
QT_MOC_LITERAL(53, 715, 12), // "showProgress"
QT_MOC_LITERAL(54, 728, 9) // "nProgress"

    },
    "BitcoinGUI\0receivedURI\0\0uri\0"
    "requestedRestart\0args\0setNumConnections\0"
    "count\0setNumBlocks\0handleRestart\0"
    "message\0title\0style\0bool*\0ret\0"
    "setStakingStatus\0setEncryptionStatus\0"
    "status\0handlePaymentRequest\0"
    "SendCoinsRecipient\0recipient\0"
    "incomingTransaction\0date\0unit\0CAmount\0"
    "amount\0type\0address\0gotoOverviewPage\0"
    "gotoHistoryPage\0gotoBlockExplorerPage\0"
    "gotoMasternodePage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0addr\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0gotoMultiSendDialog\0"
    "gotoMultisigCreate\0gotoMultisigSpend\0"
    "gotoMultisigSign\0gotoBip38Tool\0"
    "openClicked\0optionsClicked\0aboutClicked\0"
    "showHelpMessageClicked\0trayIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0showNormalIfMinimized\0fToggleHidden\0"
    "toggleHidden\0detectShutdown\0showProgress\0"
    "nProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x06 /* Public */,
       4,    1,  202,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  205,    2, 0x0a /* Public */,
       8,    1,  208,    2, 0x0a /* Public */,
       9,    1,  211,    2, 0x0a /* Public */,
      10,    4,  214,    2, 0x0a /* Public */,
      10,    3,  223,    2, 0x2a /* Public | MethodCloned */,
      15,    0,  230,    2, 0x0a /* Public */,
      16,    1,  231,    2, 0x0a /* Public */,
      18,    1,  234,    2, 0x0a /* Public */,
      21,    5,  237,    2, 0x0a /* Public */,
      28,    0,  248,    2, 0x08 /* Private */,
      29,    0,  249,    2, 0x08 /* Private */,
      30,    0,  250,    2, 0x08 /* Private */,
      31,    0,  251,    2, 0x08 /* Private */,
      32,    0,  252,    2, 0x08 /* Private */,
      33,    1,  253,    2, 0x08 /* Private */,
      33,    0,  256,    2, 0x28 /* Private | MethodCloned */,
      35,    1,  257,    2, 0x08 /* Private */,
      35,    0,  260,    2, 0x28 /* Private | MethodCloned */,
      36,    1,  261,    2, 0x08 /* Private */,
      36,    0,  264,    2, 0x28 /* Private | MethodCloned */,
      37,    0,  265,    2, 0x08 /* Private */,
      38,    0,  266,    2, 0x08 /* Private */,
      39,    0,  267,    2, 0x08 /* Private */,
      40,    0,  268,    2, 0x08 /* Private */,
      41,    0,  269,    2, 0x08 /* Private */,
      42,    0,  270,    2, 0x08 /* Private */,
      43,    0,  271,    2, 0x08 /* Private */,
      44,    0,  272,    2, 0x08 /* Private */,
      45,    0,  273,    2, 0x08 /* Private */,
      46,    1,  274,    2, 0x08 /* Private */,
      49,    1,  277,    2, 0x08 /* Private */,
      49,    0,  280,    2, 0x28 /* Private | MethodCloned */,
      51,    0,  281,    2, 0x08 /* Private */,
      52,    0,  282,    2, 0x08 /* Private */,
      53,    2,  283,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 13,   11,   10,   12,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   11,   10,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Bool, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 24, QMetaType::QString, QMetaType::QString,   22,   23,   25,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,   54,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedURI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestedRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 6: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 7: _t->setStakingStatus(); break;
        case 8: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { bool _r = _t->handlePaymentRequest((*reinterpret_cast< const SendCoinsRecipient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 11: _t->gotoOverviewPage(); break;
        case 12: _t->gotoHistoryPage(); break;
        case 13: _t->gotoBlockExplorerPage(); break;
        case 14: _t->gotoMasternodePage(); break;
        case 15: _t->gotoReceiveCoinsPage(); break;
        case 16: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->gotoSendCoinsPage(); break;
        case 18: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->gotoSignMessageTab(); break;
        case 20: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->gotoVerifyMessageTab(); break;
        case 22: _t->gotoMultiSendDialog(); break;
        case 23: _t->gotoMultisigCreate(); break;
        case 24: _t->gotoMultisigSpend(); break;
        case 25: _t->gotoMultisigSign(); break;
        case 26: _t->gotoBip38Tool(); break;
        case 27: _t->openClicked(); break;
        case 28: _t->optionsClicked(); break;
        case 29: _t->aboutClicked(); break;
        case 30: _t->showHelpMessageClicked(); break;
        case 31: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 32: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->showNormalIfMinimized(); break;
        case 34: _t->toggleHidden(); break;
        case 35: _t->detectShutdown(); break;
        case 36: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BitcoinGUI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BitcoinGUI::receivedURI)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BitcoinGUI::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BitcoinGUI::requestedRestart)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void BitcoinGUI::receivedURI(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BitcoinGUI::requestedRestart(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_UnitDisplayStatusBarControl_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitDisplayStatusBarControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitDisplayStatusBarControl_t qt_meta_stringdata_UnitDisplayStatusBarControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "UnitDisplayStatusBarControl"
QT_MOC_LITERAL(1, 28, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "newUnits"
QT_MOC_LITERAL(4, 56, 15), // "onMenuSelection"
QT_MOC_LITERAL(5, 72, 8), // "QAction*"
QT_MOC_LITERAL(6, 81, 6) // "action"

    },
    "UnitDisplayStatusBarControl\0"
    "updateDisplayUnit\0\0newUnits\0onMenuSelection\0"
    "QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitDisplayStatusBarControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void UnitDisplayStatusBarControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnitDisplayStatusBarControl *_t = static_cast<UnitDisplayStatusBarControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDisplayUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onMenuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UnitDisplayStatusBarControl::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_UnitDisplayStatusBarControl.data,
      qt_meta_data_UnitDisplayStatusBarControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UnitDisplayStatusBarControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitDisplayStatusBarControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UnitDisplayStatusBarControl.stringdata0))
        return static_cast<void*>(const_cast< UnitDisplayStatusBarControl*>(this));
    return QLabel::qt_metacast(_clname);
}

int UnitDisplayStatusBarControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
