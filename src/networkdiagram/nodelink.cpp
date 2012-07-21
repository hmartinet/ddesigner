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

#include <QPen>
#include "nodelink.h"

NodeLink::NodeLink(Node * n1, Node * n2) :
  pn1(n1), pn2(n2)
{
}

Node * NodeLink::n1()
{
  return pn1;
}

Node * NodeLink::n2()
{
  return pn1;
}

void NodeLink::paint(QPainter & painter)
{
  painter.setPen(QPen(Qt::black, 4, Qt::SolidLine));
  painter.drawLine(pn1->p(), pn2->p());
}
