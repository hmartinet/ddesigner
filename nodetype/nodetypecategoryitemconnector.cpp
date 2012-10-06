#include "nodetypecategoryitemconnector.h"

NodeTypeCategoryItemConnector::NodeTypeCategoryItemConnector(NodeTypeCategoryItem *parent) :
  parent(parent)
{
}

void NodeTypeCategoryItemConnector::toggleState()
{
  parent->toggleState();
}
