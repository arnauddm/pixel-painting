#ifndef PIXELPAINTER_HPP
#define PIXELPAINTER_HPP

#include "pixel.hpp"

#include <ctime>

#include <QObject>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QImage>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>

class PixelPainter : public QGraphicsView
{
    Q_OBJECT
public:
    PixelPainter();
    void openImage();

public slots:
    void newPx();

private:
    QTimer *timer;
    QGraphicsScene *scene;
    QImage image;
};

#endif // PIXELPAINTER_HPP
