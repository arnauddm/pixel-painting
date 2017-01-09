#ifndef PIXEL_HPP
#define PIXEL_HPP

#include <ctime>

#include <QGraphicsEllipseItem>
#include <QColor>
#include <QBrush>
#include <QPen>

class Pixel : public QGraphicsEllipseItem
{
public:
    Pixel(unsigned int x, unsigned int y, unsigned int size, QColor color);

signals:

public slots:
};

#endif // PIXEL_HPP
