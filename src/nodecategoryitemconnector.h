#ifndef NODECATEGORYITEMCONNECTOR_H
#define NODECATEGORYITEMCONNECTOR_H

#include <QObject>
#include "nodecategoryitem.h"

class NodeCategoryItemConnector : public QObject
{
  Q_OBJECT
public:
  explicit NodeCategoryItemConnector(NodeCategoryItem *parent = 0);

private:
  NodeCategoryItem* parent;

public slots:
  void toggleState();
  
};

#endif // NODECATEGORYITEMCONNECTOR_H
