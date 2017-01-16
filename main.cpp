#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "myrec.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // create scene
    QGraphicsScene *scene = new QGraphicsScene();

    // create Item
    MyRec * player = new MyRec();

    //add Item
    scene->addItem(player);

    //make focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    //spawn enemy
    QTimer *timer = new QTimer;
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);

    // vitualize
    QGraphicsView *view = new QGraphicsView(scene);
    view->setSceneRect(0,0,800,600);
    view->setFixedSize(800,600);


    //set initial position player
    player->setPos(view->width()/2,view->height()-player->rect().height());

    view->show();

//    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    return a.exec();
}


