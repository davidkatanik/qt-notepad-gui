/****************************************************************************
** Meta object code from reading C++ file 'fontdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fontdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fontdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fontdialog_t {
    QByteArrayData data[7];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fontdialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fontdialog_t qt_meta_stringdata_fontdialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "fontdialog"
QT_MOC_LITERAL(1, 11, 12), // "familySelect"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 42, 10), // "fontSelect"
QT_MOC_LITERAL(5, 53, 10), // "sizeSelect"
QT_MOC_LITERAL(6, 64, 4) // "back"

    },
    "fontdialog\0familySelect\0\0QListWidgetItem*\0"
    "fontSelect\0sizeSelect\0back"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fontdialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void fontdialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fontdialog *_t = static_cast<fontdialog *>(_o);
        switch (_id) {
        case 0: _t->familySelect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->fontSelect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->sizeSelect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->back(); break;
        default: ;
        }
    }
}

const QMetaObject fontdialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fontdialog.data,
      qt_meta_data_fontdialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fontdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fontdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fontdialog.stringdata))
        return static_cast<void*>(const_cast< fontdialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int fontdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE