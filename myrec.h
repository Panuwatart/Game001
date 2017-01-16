#ifndef MYREC_H
#define MYREC_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QBrush>


class MyRec : public QObject, public QGraphicsRectItem
{ Q_OBJECT
public:
    MyRec();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();
};

#endif // MYREC_H
