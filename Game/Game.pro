TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -L"..\SFML-2.5.1\lib"
LIBS += -L"..\SFML-2.5.1\bin"
LIBS += -L"..\SFML-2.5.1\doc"
LIBS += -L"..\SFML-2.5.1\examples"



CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window
CONFIG(debug  , debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window

INCLUDEPATH += "..\SFML-2.5.1\include"
DEPENDPATH  += "..\SFML-2.5.1\include"


SOURCES += \
    src/Player.cpp \
    src/Texture.cpp \
    App/main.cpp \


HEADERS += \
    include/Player.hpp \
    include/Texture.hpp \






