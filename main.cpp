#include <QtGui/QApplication>
#include <QtGui/QGraphicsView>
#include <QtGui/QLabel>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


   /* QGraphicsScene scene;
        QGraphicsView view(&scene);
        QGraphicsPixmapItem item(QPixmap("/home/stripecat/Albatross-Main/green.gif"));
        scene.addItem(&item);
        view.show(); */

  /*  QWidget *pic = new QWidget(this);
        pic->setStyleSheet("background-image: url(/home/stripecat/Albatross-Main/green.gif)");
        pic->setGeometry(QRect(50,50,128,128)); */
        MainWindow w;
        QLabel label("<img src='/home/stripecat/Albatross-Main/green.gif' />");
        //label.show();

        //w.objectName()
        //label.show();





  /*  QPalette myPalette = palette();
    QBrush windowBrush = myPalette.window();
    windowBrush.setTexture( backGroundPixmap ); // use setTextureImage if the picture is a QImage
    myPalette.setBrush( QPalette::Window,  windowBrush );
*/
    
    return a.exec();
}
