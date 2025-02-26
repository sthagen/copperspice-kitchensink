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

#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QList>
#include <QSqlDatabase>
#include <QString>
#include <QWidget>

class TreeView : public QWidget
{
   CS_OBJECT(TreeView)

 public:
   TreeView();

 private:
   bool createConnection();
   QSqlDatabase m_db;

   struct TreeData {
      int m_id;
      QString m_name;
      int m_parentId;
   };

   QList<TreeData> getData();
   static bool sortMe(const TreeView::TreeData &s1, const TreeView::TreeData &s2);
};

#endif
