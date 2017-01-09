#include "pixelpainter.hpp"

#include <iostream>

PixelPainter::PixelPainter()
{
    this->openImage();
    srand(time(0));

    this->timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(newPx()));
    this->timer->start(1);

    this->scene = new QGraphicsScene();
    this->scene->setSceneRect(0, 0, this->image.width(), this->image.height());

    this->setFixedSize(this->image.width(), this->image.height());
    this->setScene(this->scene);
}

void PixelPainter::newPx() {
    for(unsigned int i(0) ; i < 100 ; i++) {
        unsigned int x(rand() % this->image.width()), y(rand() % this->image.height()), size(10);
        QColor color(this->image.pixel(x, y));
        Pixel *px = new Pixel(x, y, size, color);
        this->scene->addItem(px);
    }
}

void PixelPainter::openImage() {
    QString imageLink(QFileDialog::getOpenFileName(this, "Ouvrir", QDir::currentPath(), tr("Images(*.png *jpg *jpeg)"))); //on stocke le chemin (adresse) de l'image dans une variable
    if(imageLink.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Aucune image n'a été sélectionnée...");
        this->close();
    }
    this->image.load(imageLink); //si on a ouvert une image on l'a charge
}
