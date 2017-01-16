#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsRectItem>
#include <QTimer>
#include <QObject>
#include <QBrush>




class Enemy : public QObject ,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Enemy();
public slots:     // have to make it to be Qobject.
    void move();
};
#endif // ENEMY_H
