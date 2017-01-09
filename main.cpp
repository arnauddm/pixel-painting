#include "pixelpainter.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PixelPainter *pp = new PixelPainter();
    pp->showFullScreen();

    return a.exec();
}
