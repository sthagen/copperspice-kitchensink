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

#ifndef VIDEOSURFACE_H
#define VIDEOSURFACE_H

#ifndef QT_NO_MULTIMEDIA

#include <QAbstractVideoSurface>
#include <QWidget>

class VideoSurface : public QAbstractVideoSurface
{
   CS_OBJECT(VideoSurface)

 public:
   VideoSurface(QWidget *widget, QObject *parent = nullptr);

   QList<QVideoFrame::PixelFormat> supportedPixelFormats(
         QAbstractVideoBuffer::HandleType handleType = QAbstractVideoBuffer::NoHandle) const override;

   bool isFormatSupported(const QVideoSurfaceFormat &format) const override;
   bool start(const QVideoSurfaceFormat &format) override;
   void stop() override;

   bool present(const QVideoFrame &frame) override;

   QRect videoRect() const {
      return targetRect;
   }
   void updateVideoRect();

   void paint(QPainter *painter);

 private:
   QWidget *m_widget;
   QImage::Format m_imageFormat;
   QRect targetRect;
   QSize imageSize;
   QRect sourceRect;
   QVideoFrame currentFrame;
};

#endif   // ! QT_NO_MULTIMEDIA

#endif
