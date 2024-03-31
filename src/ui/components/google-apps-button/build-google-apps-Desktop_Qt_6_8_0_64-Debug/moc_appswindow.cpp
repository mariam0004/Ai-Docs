/****************************************************************************
** Meta object code from reading C++ file 'appswindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../google-apps/appswindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAppsWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAppsWindowENDCLASS = QtMocHelpers::stringData(
    "AppsWindow",
    "resizeWindow",
    "",
    "openAccount",
    "openSearch",
    "openMap",
    "openPlay",
    "openNews",
    "openGmail",
    "openMeet",
    "openChat",
    "openContacts",
    "openDrive",
    "openCalendar",
    "openTranslate",
    "openPhoto",
    "openChrome"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAppsWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x08,    1 /* Private */,
       3,    0,  107,    2, 0x08,    3 /* Private */,
       4,    0,  108,    2, 0x08,    4 /* Private */,
       5,    0,  109,    2, 0x08,    5 /* Private */,
       6,    0,  110,    2, 0x08,    6 /* Private */,
       7,    0,  111,    2, 0x08,    7 /* Private */,
       8,    0,  112,    2, 0x08,    8 /* Private */,
       9,    0,  113,    2, 0x08,    9 /* Private */,
      10,    0,  114,    2, 0x08,   10 /* Private */,
      11,    0,  115,    2, 0x08,   11 /* Private */,
      12,    0,  116,    2, 0x08,   12 /* Private */,
      13,    0,  117,    2, 0x08,   13 /* Private */,
      14,    0,  118,    2, 0x08,   14 /* Private */,
      15,    0,  119,    2, 0x08,   15 /* Private */,
      16,    0,  120,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AppsWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSAppsWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAppsWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAppsWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AppsWindow, std::true_type>,
        // method 'resizeWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'openAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openPlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openNews'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openGmail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openMeet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openChat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openContacts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openDrive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openCalendar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openTranslate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openPhoto'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openChrome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AppsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppsWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resizeWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->openAccount(); break;
        case 2: _t->openSearch(); break;
        case 3: _t->openMap(); break;
        case 4: _t->openPlay(); break;
        case 5: _t->openNews(); break;
        case 6: _t->openGmail(); break;
        case 7: _t->openMeet(); break;
        case 8: _t->openChat(); break;
        case 9: _t->openContacts(); break;
        case 10: _t->openDrive(); break;
        case 11: _t->openCalendar(); break;
        case 12: _t->openTranslate(); break;
        case 13: _t->openPhoto(); break;
        case 14: _t->openChrome(); break;
        default: ;
        }
    }
}

const QMetaObject *AppsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAppsWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AppsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
