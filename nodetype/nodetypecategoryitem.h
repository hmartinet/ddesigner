#ifndef NODETYPECATEGORYITEM_H
#define NODETYPECATEGORYITEM_H

#include <QListWidgetItem>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QSize>
#include "nodetypeitem.h"

class NodeTypeCategoryItem : public QListWidgetItem
{
public:
  explicit NodeTypeCategoryItem(QString label, QListWidget *parent = 0);
  void addNode(NodeTypeItem* nodeItem);
  void toggleState();
  void applyFilter(QString filter);

private:
  bool hidden;
  QString filter;
  QList<NodeTypeItem*> nodeItemList;
};

#endif // NODETYPECATEGORYITEM_H
