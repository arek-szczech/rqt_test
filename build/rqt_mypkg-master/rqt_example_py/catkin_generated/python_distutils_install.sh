#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/arek/rqt_test/src/rqt_mypkg-master/rqt_example_py"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/arek/rqt_test/install/lib/python2.7/dist-packages:/home/arek/rqt_test/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/arek/rqt_test/build" \
    "/usr/bin/python" \
    "/home/arek/rqt_test/src/rqt_mypkg-master/rqt_example_py/setup.py" \
    build --build-base "/home/arek/rqt_test/build/rqt_mypkg-master/rqt_example_py" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/arek/rqt_test/install" --install-scripts="/home/arek/rqt_test/install/bin"
