#include "nodelabelitem.h"
#include <QTextBlockFormat>
#include <QTextCursor>

NodeLabelItem::NodeLabelItem(const QString& text, QGraphicsItem* parent) :
  QGraphicsTextItem(text, parent)
{
  this->setTextWidth(100);
  QTextBlockFormat format;
  format.setAlignment(Qt::AlignCenter);
  QTextCursor cursor = this->textCursor();
  cursor.select(QTextCursor::Document);
  cursor.mergeBlockFormat(format);
  cursor.clearSelection();
  this->setTextCursor(cursor);
  this->setPos(QPointF((parent->boundingRect().width() - this->boundingRect().width()) / 2, parent->boundingRect().height()));
}
