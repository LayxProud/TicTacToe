#include "square.h"

#include <QDebug>

Square::Square(int x, int y, int width, int height, QGraphicsItem *parent)
    : QGraphicsItem(parent)
    , m_x(x)
    , m_y(y)
    , m_width(width)
    , m_height(height)
{
    setFlag(QGraphicsItem::ItemIsSelectable);
}

QRectF Square::boundingRect() const
{
    return QRectF(0, 0, m_width, m_height); // Square size
}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    painter->drawRect(boundingRect());
}

void Square::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        qDebug() << "User clicked on " << event->pos();
    }
}
