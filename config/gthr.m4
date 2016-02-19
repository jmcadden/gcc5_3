dnl Copyright (C) 2012 Free Software Foundation, Inc.
dnl This file is free software, distributed under the terms of the GNU
dnl General Public License.  As a special exception to the GNU General
dnl Public License, this file may be distributed as part of a program
dnl that contains a configuration script generated by Autoconf, under
dnl the same distribution terms as the rest of that program.

dnl Define header location by thread model

dnl usage: GCC_AC_THREAD_HEADER([thread_model])
AC_DEFUN([GCC_AC_THREAD_HEADER],
[
case $1 in
    aix)	thread_header=config/rs6000/gthr-aix.h ;;
    dce)	thread_header=config/pa/gthr-dce.h ;;
    ebbrt)	thread_header=config/gthr-ebbrt.h ;;
    lynx)	thread_header=config/gthr-lynx.h ;;
    mipssde)	thread_header=config/mips/gthr-mipssde.h ;;
    posix)	thread_header=gthr-posix.h ;;
    rtems)	thread_header=config/gthr-rtems.h ;;
    single)	thread_header=gthr-single.h ;;
    tpf)	thread_header=config/s390/gthr-tpf.h ;;
    vxworks)	thread_header=config/gthr-vxworks.h ;;
    win32)	thread_header=config/i386/gthr-win32.h ;;
esac
AC_SUBST(thread_header)
])

