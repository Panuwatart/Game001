#include "myrec.h"
#include "bullet.h"
#include "enemy.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QDebug>

MyRec::MyRec()
{ 
    setRect(0,0,50,100);
}

void MyRec::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up :
        setPos(x(),y()-50);
        break;
    case Qt::Key_Down :
        setPos(x(),y()+50);
        break;
    case Qt::Key_Left :
        setPos(x()-50,y());
        // set x area
        if(pos().x()<=0){
           setPos(0,y()); }
        break;
    case Qt::Key_Right :
        setPos(x()+50,y());
        // set x area
        if(pos().x()>=800-this->rect().width()){
           setPos(800-this->rect().width(),y()); }
        break;
    }
    if (event->key()==Qt::Key_Space)
      {  // create bullet
         Bullet *bullet1 = new Bullet();
         qDebug() << "bullet1 created !!";

         scene()->addItem(bullet1);
         bullet1->setPos(this->pos());
    }
}

void MyRec::spawn()
{
    Enemy *enemy = new Enemy();
    scene()->addItem(enemy);
}
