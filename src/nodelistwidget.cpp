#include <QListWidgetItem>
#include "nodecategoryitem.h"
#include "nodelistwidget.h"

NodeListWidget::NodeListWidget(QWidget *parent) :
  QListWidget(parent)
{
  this->setIconSize(QSize(48, 48));
  NodeCategoryItem* c = new NodeCategoryItem("Desktop Computer", this);
  c->addNode(new QListWidgetItem(QIcon(":/resources/shapes/computer-hp-pavilion-t3700.svg"), "HP Pavilion T3700", this));
  c->addNode(new QListWidgetItem(QIcon(":/resources/shapes/computer-compaq-presario-sr2100.svg"), "Compaq Presario SR2100", this));
  c = new NodeCategoryItem("Laptop", this);
  c->addNode(new QListWidgetItem(QIcon(":/resources/shapes/computer-laptop-lenovo-thinkpad-r61.svg"), "Lenovo Thinkpad R61", this));
}
