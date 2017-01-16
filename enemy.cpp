#include "enemy.h"
#include <QList>
#include <stdlib.h> //rand()

Enemy::Enemy()
{

    //set random add position
    int random_number =rand()%751;
    setPos(random_number,0);

    //QBrush B1 = new QBrush(Qt::blue);
    this->brush().color().blue();

    setRect(0,0,50,100);
    QTimer *timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}



void Enemy::move()
{
    setPos(x(),y()+2);
    if (pos().ry()>600)
    {
        delete this;
    }

}
