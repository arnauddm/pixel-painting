#include "pixel.hpp"

Pixel::Pixel(unsigned int x, unsigned int y, unsigned int size, QColor color)
{
    this->setRect(x, y, size, size);
    QBrush brush(color);
    QPen pen;
    pen.setWidth(0);
    this->setBrush(brush);
}

