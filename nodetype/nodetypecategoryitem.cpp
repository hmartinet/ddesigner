
#include "nodetypecategoryitem.h"
#include "nodetypecategoryitemconnector.h"

NodeTypeCategoryItem::NodeTypeCategoryItem(QString label, QListWidget *parent) :
  QListWidgetItem(parent),
  hidden(false)
{
  parent->addItem(this);

  QPushButton *button = new QPushButton(label);
  QObject::connect(button, SIGNAL(clicked()), new NodeTypeCategoryItemConnector(this), SLOT(toggleState()));
  button->setMaximumHeight(18);
  QHBoxLayout *layout= new QHBoxLayout();
  layout->setContentsMargins(0,0,0,0);
  layout->addWidget(button);
  QWidget *widget = new QWidget();
  widget->setLayout(layout);
  this->setSizeHint(widget->sizeHint());
  parent->setItemWidget(this, widget);
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

