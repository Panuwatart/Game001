#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QTimer>
#include <QObject>
#include <QBrush>




class Bullet : public QObject ,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();
public slots:     // have to make it to be Qobject.
    void move();
};

#endif // BULLET_H
