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

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  QObject::connect(ui->listWidget, SIGNAL(currentRowChanged(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));

  QObject::connect(ui->nodeTypeListWidget, SIGNAL(itemClicked(QListWidgetItem*)), ui->diagramView, SLOT(createAction(QListWidgetItem*)));
  QObject::connect(ui->nodeToolButton, SIGNAL(clicked()), ui->optionsWidget, SLOT(showNodeOptions()));

  QObject::connect(ui->moveToolButton, SIGNAL(clicked()), ui->diagramView, SLOT(setSelectionMode()));
  QObject::connect(ui->moveToolButton, SIGNAL(clicked()), ui->optionsWidget, SLOT(showSelectionOptions()));

  QObject::connect(ui->gridCheckBox, SIGNAL(toggled(bool)), ui->diagramView, SLOT(setDisplayGrid(bool)));
  ui->diagramView->setDisplayGrid(ui->gridCheckBox->isChecked());
}

MainWindow::~MainWindow()
{
  delete ui;
}


