#ifndef NODETYPECATEGORYITEMCONNECTOR_H
#define NODETYPECATEGORYITEMCONNECTOR_H

#include <QObject>
#include "nodetypecategoryitem.h"

class NodeTypeCategoryItemConnector : public QObject
{
  Q_OBJECT
public:
  explicit NodeTypeCategoryItemConnector(NodeTypeCategoryItem *parent = 0);

private:
  NodeTypeCategoryItem* parent;

public slots:
  void toggleState();
  
};

#endif // NODETYPECATEGORYITEMCONNECTOR_H
