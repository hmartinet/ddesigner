#ifndef NODELABELITEM_H
#define NODELABELITEM_H

#include <QGraphicsTextItem>
#include <QTextBlockFormat>
#include <QTextCursor>
#include <QTextDocument>

class NodeLabelItem : public QGraphicsTextItem
{
public:
    NodeLabelItem(QGraphicsItem* parentNode, const QString& text);

    void setPosition(Qt::Alignment alignment, QPointF position);
    QGraphicsItem* getParentNode();

    QRectF idealBoundingRect() const;

protected:
    void align(Qt::Alignment alignment);

private:
    QGraphicsItem* parentNode;

};

#endif // NODELABELITEM_H
