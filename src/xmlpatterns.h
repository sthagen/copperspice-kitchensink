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

#ifndef XMLPATTERNS_H
#define XMLPATTERNS_H

#include "ui_xmlpatterns.h"

#include <QString>
#include <QWidget>

class XmlPatterns : public QWidget
{
   CS_OBJECT(XmlPatterns)

 public:
   XmlPatterns();
   ~XmlPatterns();

 private:
   Ui::XmlPatterns *ui;

   void evaluate(const QString &str);
   void loadInputFile();

   // slot declarations
   void displayQuery(int index);
};

#endif
