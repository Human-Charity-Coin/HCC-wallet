/****************************************************************************
** Meta object code from reading C++ file 'walletframe.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletFrame_t {
    QByteArrayData data[24];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletFrame_t qt_meta_stringdata_WalletFrame = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletFrame"
QT_MOC_LITERAL(1, 12, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(4, 46, 18), // "gotoMasternodePage"
QT_MOC_LITERAL(5, 65, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(6, 86, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(7, 104, 4), // "addr"
QT_MOC_LITERAL(8, 109, 21), // "gotoBlockExplorerPage"
QT_MOC_LITERAL(9, 131, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(10, 150, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(11, 171, 19), // "gotoMultiSendDialog"
QT_MOC_LITERAL(12, 191, 18), // "gotoMultisigDialog"
QT_MOC_LITERAL(13, 210, 5), // "index"
QT_MOC_LITERAL(14, 216, 13), // "gotoBip38Tool"
QT_MOC_LITERAL(15, 230, 13), // "encryptWallet"
QT_MOC_LITERAL(16, 244, 6), // "status"
QT_MOC_LITERAL(17, 251, 12), // "backupWallet"
QT_MOC_LITERAL(18, 264, 16), // "changePassphrase"
QT_MOC_LITERAL(19, 281, 12), // "unlockWallet"
QT_MOC_LITERAL(20, 294, 10), // "lockWallet"
QT_MOC_LITERAL(21, 305, 16), // "toggleLockWallet"
QT_MOC_LITERAL(22, 322, 20), // "usedSendingAddresses"
QT_MOC_LITERAL(23, 343, 22) // "usedReceivingAddresses"

    },
    "WalletFrame\0gotoOverviewPage\0\0"
    "gotoHistoryPage\0gotoMasternodePage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "addr\0gotoBlockExplorerPage\0"
    "gotoSignMessageTab\0gotoVerifyMessageTab\0"
    "gotoMultiSendDialog\0gotoMultisigDialog\0"
    "index\0gotoBip38Tool\0encryptWallet\0"
    "status\0backupWallet\0changePassphrase\0"
    "unlockWallet\0lockWallet\0toggleLockWallet\0"
    "usedSendingAddresses\0usedReceivingAddresses"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x0a /* Public */,
       3,    0,  125,    2, 0x0a /* Public */,
       4,    0,  126,    2, 0x0a /* Public */,
       5,    0,  127,    2, 0x0a /* Public */,
       6,    1,  128,    2, 0x0a /* Public */,
       6,    0,  131,    2, 0x2a /* Public | MethodCloned */,
       8,    0,  132,    2, 0x0a /* Public */,
       9,    1,  133,    2, 0x0a /* Public */,
       9,    0,  136,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  137,    2, 0x0a /* Public */,
      10,    0,  140,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  141,    2, 0x0a /* Public */,
      12,    1,  142,    2, 0x0a /* Public */,
      14,    0,  145,    2, 0x0a /* Public */,
      15,    1,  146,    2, 0x0a /* Public */,
      17,    0,  149,    2, 0x0a /* Public */,
      18,    0,  150,    2, 0x0a /* Public */,
      19,    0,  151,    2, 0x0a /* Public */,
      20,    0,  152,    2, 0x0a /* Public */,
      21,    0,  153,    2, 0x0a /* Public */,
      22,    0,  154,    2, 0x0a /* Public */,
      23,    0,  155,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletFrame *_t = static_cast<WalletFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotoOverviewPage(); break;
        case 1: _t->gotoHistoryPage(); break;
        case 2: _t->gotoMasternodePage(); break;
        case 3: _t->gotoReceiveCoinsPage(); break;
        case 4: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->gotoSendCoinsPage(); break;
        case 6: _t->gotoBlockExplorerPage(); break;
        case 7: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->gotoSignMessageTab(); break;
        case 9: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->gotoVerifyMessageTab(); break;
        case 11: _t->gotoMultiSendDialog(); break;
        case 12: _t->gotoMultisigDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->gotoBip38Tool(); break;
        case 14: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->backupWallet(); break;
        case 16: _t->changePassphrase(); break;
        case 17: _t->unlockWallet(); break;
        case 18: _t->lockWallet(); break;
        case 19: _t->toggleLockWallet(); break;
        case 20: _t->usedSendingAddresses(); break;
        case 21: _t->usedReceivingAddresses(); break;
        default: ;
        }
    }
}

const QMetaObject WalletFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletFrame.data,
      qt_meta_data_WalletFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletFrame.stringdata0))
        return static_cast<void*>(const_cast< WalletFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
