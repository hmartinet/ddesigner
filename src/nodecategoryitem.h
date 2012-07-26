#ifndef NODECATEGORYITEM_H
#define NODECATEGORYITEM_H

#include <QListWidgetItem>

class NodeCategoryItem : public QListWidgetItem
{
public:
  explicit NodeCategoryItem(QString label, QListWidget *parent = 0);
  void addNode(QListWidgetItem* nodeItem);
  void toggleState();

private:
  bool hidden;
  QList<QListWidgetItem*> nodeItemList;
};

#endif // NODECATEGORYITEM_H
