#include "nodelabelitem.h"

NodeLabelItem::NodeLabelItem(QGraphicsItem* parentNode,
                             const QString& text) :
    QGraphicsTextItem(text, parentNode),
    parentNode(parentNode)
{
    setTextWidth(100);
}

void NodeLabelItem::setPosition(Qt::Alignment alignment, QPointF position)
{
    align(alignment);
    setPos(position);
}

QGraphicsItem* NodeLabelItem::getParentNode()
{
    return parentNode;
}

QRectF NodeLabelItem::idealBoundingRect() const
{
    return QRectF(pos().x() + (boundingRect().width() - document()->idealWidth()) / 2,
                  pos().y(),
                  document()->idealWidth(),
                  boundingRect().height());
}

void NodeLabelItem::align(Qt::Alignment alignment)
{
    QTextBlockFormat format;
    format.setAlignment(alignment);
    QTextCursor cursor = textCursor();
    cursor.select(QTextCursor::Document);
    cursor.mergeBlockFormat(format);
    cursor.clearSelection();
    setTextCursor(cursor);
}

