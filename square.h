#ifndef SQUARE_H
#define SQUARE_H

#include <QGraphicsItem>
#include <QRectF>
#include <QPainter>
#include <QObject>
#include <QGraphicsSceneMouseEvent>

class Square : public QObject, public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    Square(int x, int y, int width, int height, QGraphicsItem *parent = nullptr);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

signals:

private slots:

private:
    int m_x;
    int m_y;
    int m_width;
    int m_height;
};

#endif // SQUARE_H
