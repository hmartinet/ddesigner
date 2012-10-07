#ifndef NODETYPECATEGORYITEM_H
#define NODETYPECATEGORYITEM_H

#include <QListWidgetItem>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QSize>

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
