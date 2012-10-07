#include "nodetypeitem.h"

NodeTypeItem::NodeTypeItem(QString label, QString filePath, QListWidget *parent) :
  QListWidgetItem(QIcon(filePath), label, parent)
{
  this->setData(Qt::UserRole, "svg");
  this->setData(Qt::UserRole + 1, label);
  this->setData(Qt::UserRole + 2, filePath);
}

