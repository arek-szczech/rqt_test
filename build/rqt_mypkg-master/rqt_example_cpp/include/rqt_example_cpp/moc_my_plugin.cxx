/****************************************************************************
** Meta object code from reading C++ file 'my_plugin.h'
**
** Created: Sat Nov 11 14:24:35 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/rqt_mypkg-master/rqt_example_cpp/include/rqt_example_cpp/my_plugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'my_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rqt_example_cpp__MyPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_rqt_example_cpp__MyPlugin[] = {
    "rqt_example_cpp::MyPlugin\0"
};

void rqt_example_cpp::MyPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData rqt_example_cpp::MyPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject rqt_example_cpp::MyPlugin::staticMetaObject = {
    { &rqt_gui_cpp::Plugin::staticMetaObject, qt_meta_stringdata_rqt_example_cpp__MyPlugin,
      qt_meta_data_rqt_example_cpp__MyPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rqt_example_cpp::MyPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rqt_example_cpp::MyPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rqt_example_cpp::MyPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_example_cpp__MyPlugin))
        return static_cast<void*>(const_cast< MyPlugin*>(this));
    typedef rqt_gui_cpp::Plugin QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int rqt_example_cpp::MyPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef rqt_gui_cpp::Plugin QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
