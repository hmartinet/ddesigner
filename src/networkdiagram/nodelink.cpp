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

#include "nodelink.h"

NodeLink::NodeLink(QPoint p1, QPoint p2)
{
  qp1 = p1;
  qp2 = p2;
}

QPoint NodeLink::p1()
{
  return qp1;
}

QPoint NodeLink::p2()
{
  return qp2;
}