### Makefile.am for the qhull package (src)
### Author: Rafael Laboissiere <rafael@debian.org>
### Created: Mon Dec  3 21:36:21 CET 2001

### Shared Library

# to:
lib_LTLIBRARIES = libqhull.la

# from (frequently used files at end):
libqhull_la_SOURCES = \
  user.c \
  global.c \
  random.c \
  stat.c \
  io.c \
  geom2.c \
  poly2.c \
  merge.c \
  libqhull.c \
  geom.c \
  poly.c \
  qset.c \
  mem.c

# how:
libqhull_la_LDFLAGS = -version-info 4:0:0 -lm

### Utility programs

# to:
bin_PROGRAMS = qhull rbox qconvex qdelaunay qvoronoi qhalf

# from:
qhull_SOURCES = unix.c
rbox_SOURCES = rbox.c
qconvex_SOURCES = qconvex.c
qdelaunay_SOURCES = qdelaun.c
qvoronoi_SOURCES = qvoronoi.c
qhalf_SOURCES = qhalf.c

# how:
qhull_LDADD = libqhull.la
rbox_LDADD = libqhull.la
qconvex_LDADD = libqhull.la
qdelaunay_LDADD = libqhull.la
qvoronoi_LDADD = libqhull.la
qhalf_LDADD = libqhull.la

### Include files

pkginclude_HEADERS = \
  geom.h \
  mem.h \
  poly.h \
  qhull_a.h \
  stat.h \
  io.h \
  merge.h \
  libqhull.h  \
  qset.h \
  user.h


### Example programs

# to:
docdir = $(prefix)/share/doc/$(PACKAGE)
examplesdir = $(docdir)/examples

# which:
examples_DATA = \
  user_eg.c \
  user_eg2.c \
  qhull_interface.cpp \
  Makefile.txt \
  Make-config.sh \
  MBorland

doc_DATA = Changes.txt \
    index.htm \
    qh-geom.htm \
    qh-globa.htm \
    qh-io.htm \
    qh-mem.htm \
    qh-merge.htm \
    qh-poly.htm \
    qh-qhull.htm \
    qh-set.htm \
    qh-stat.htm \
    qh-user.htm


### Extra files to be included in the tarball

EXTRA_DIST = \
  $(doc_DATA) \
  $(examples_DATA)

