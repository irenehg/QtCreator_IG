HEADERS += \
  base_batidora.h \
  batidora_jerarquico.h \
  colors.h \
  basic_object3d.h \
  cone.h \
  cube.h \
  cylinder.h \
  file_ply_stl.h \
  obj_revolution.h \
  object3d.h \
  axis.h \
  ply.h \
  sphere.h \
  sujeccion.h \
  tetrahedron.h \
  glwidget.h \
  varilla.h \
  window.h

SOURCES += \
  base_batidora.cc \
  basic_object3d.cc \
  batidora_jerarquico.cc \
  cone.cc \
  cube.cc \
  cylinder.cc \
  file_ply_stl.cc \
  obj_revolution.cpp \
  object3d.cc \
  axis.cc \
  ply.cc \
  sphere.cc \
  sujeccion.cc \
  tetrahedron.cc \
  main.cc \
  glwidget.cc \
  varilla.cc \
  window.cc


LIBS += -L/usr/X11R6/lib64 -lGL


CONFIG += c++11
QT += widgets
