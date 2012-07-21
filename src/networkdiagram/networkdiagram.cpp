/****************************************************************************
**
** Copyright 2012 Hervé Martinet
**
** This file is part of NetDesigner.
**
** NetDesigner is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** NetDesigner is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Foobar. If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/

#include "networkdiagram.h"

NetworkDiagram::NetworkDiagram() :
  nodeList(QList<Node*>()),
  nodeLinkList(QList<NodeLink*>())
{
}

QList<Node*> & NetworkDiagram::getNodeList()
{
  return nodeList;
}

QList<NodeLink*> & NetworkDiagram::getNodeLinkList()
{
  return nodeLinkList;
}
