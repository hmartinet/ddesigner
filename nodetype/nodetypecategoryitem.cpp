
#include "nodetypecategoryitem.h"
#include "nodetypecategoryitemconnector.h"

#include <QDebug>
#include <QStyledItemDelegate>

NodeTypeCategoryItem::NodeTypeCategoryItem(QString label, QListWidget *parent) :
  QListWidgetItem(parent),
  hidden(false)
{
  QPushButton *button = new QPushButton(label);
  button->setObjectName("categoryButton");
  button->setCheckable(true);
  button->setFocusPolicy(Qt::NoFocus);
  button->setMinimumHeight(20);
  button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

  parent->setItemWidget(this, button);

  setSizeHint(button->sizeHint());

  QObject::connect(button, SIGNAL(clicked()), new NodeTypeCategoryItemConnector(this), SLOT(toggleState()));
}

void NodeTypeCategoryItem::addNode(QListWidgetItem* nodeItem)
{
  nodeItemList << nodeItem;
}

void NodeTypeCategoryItem::toggleState()
{
  hidden = !hidden;
  foreach (QListWidgetItem* nodeItem, nodeItemList)
    {
      nodeItem->setHidden(hidden);
    }
}

