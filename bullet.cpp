#include "bullet.h"
#include "enemy.h"
#include <QGraphicsScene>
#include <QList>


Bullet::Bullet()
{
    setRect(20,0,10,20);
    QTimer *timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

}

void Bullet::move()
{
    setPos(x(),y()-10);
    if (pos().ry()<100)
    {
        delete this;
    }

    // collission
    QList<QGraphicsItem *> colliding_Item = collidingItems();
    for (int i=0, n=colliding_Item.size();i<n;i++)
    {
        if(typeid(*(colliding_Item[i]))==typeid(Enemy))
          {
            delete(colliding_Item[i]);
            delete(this);
          }
    }

}
