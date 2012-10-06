#ifndef NODETYPECATEGORYITEM_H
#define NODETYPECATEGORYITEM_H

#include <QListWidgetItem>

class NodeTypeCategoryItem : public QListWidgetItem
{
public:
  explicit NodeTypeCategoryItem(QString label, QListWidget *parent = 0);
  void addNode(QListWidgetItem* nodeItem);
  void toggleState();

private:
  bool hidden;
  QList<QListWidgetItem*> nodeItemList;
};

#endif // NODETYPECATEGORYITEM_H
