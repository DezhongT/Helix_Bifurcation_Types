#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/dezhong/Desktop/PNAS_Code/motionPlanning/src/intera_sdk/intera_interface"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/dezhong/Desktop/PNAS_Code/motionPlanning/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/dezhong/Desktop/PNAS_Code/motionPlanning/install/lib/python2.7/dist-packages:/home/dezhong/Desktop/PNAS_Code/motionPlanning/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/dezhong/Desktop/PNAS_Code/motionPlanning/build" \
    "/usr/bin/python2" \
    "/home/dezhong/Desktop/PNAS_Code/motionPlanning/src/intera_sdk/intera_interface/setup.py" \
    egg_info --egg-base /home/dezhong/Desktop/PNAS_Code/motionPlanning/build/intera_sdk/intera_interface \
    build --build-base "/home/dezhong/Desktop/PNAS_Code/motionPlanning/build/intera_sdk/intera_interface" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/dezhong/Desktop/PNAS_Code/motionPlanning/install" --install-scripts="/home/dezhong/Desktop/PNAS_Code/motionPlanning/install/bin"
