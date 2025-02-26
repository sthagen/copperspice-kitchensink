/***********************************************************************
*
* Copyright (c) 2012-2025 Barbara Geller
* Copyright (c) 2012-2025 Ansel Sermersheim
*
* Copyright (c) 2015 The Qt Company Ltd.
*
* This file is part of KitchenSink.
*
* KitchenSink is free software which is released under the BSD 2-Clause license.
* For license details refer to the LICENSE provided with this project.
*
* KitchenSink is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://opensource.org/licenses/BSD-2-Clause
*
***********************************************************************/

#ifndef TABLEWIDGET_VIEW_H
#define TABLEWIDGET_VIEW_H

#include "ui_tablewidget_view.h"

#include <QWidget>

class QModelIndex;
class QStandardItemModel;

class TableWidget_View : public QWidget
{
   CS_OBJECT(TableWidget_View)

 public:
   explicit TableWidget_View(QWidget *parent = nullptr);
   ~TableWidget_View();

 private:
   void setUpWidget();
   void setUpView();

   // slot methods
   void tableClicked_W(int row, int col);
   void tableClicked_V(const QModelIndex &index);

   Ui::TableWidget_View *ui;
   QStandardItemModel *m_model;
};

#endif
