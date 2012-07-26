#include "nodecategoryitemconnector.h"

NodeCategoryItemConnector::NodeCategoryItemConnector(NodeCategoryItem *parent) :
  parent(parent)
{
}

void NodeCategoryItemConnector::toggleState()
{
  parent->toggleState();
}
