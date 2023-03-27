// Pawxel - Copyright (c) 2022-2023 Jan Kowalewicz. All rights reserved.
// Contact: jan@nitroosit.de; jan.kowalewicz@web.de
#pragma once

#include <FramelessWidget>
#include <QObject>
#include <QWidget>

#include <QPointer>

#include <QHBoxLayout>

#include <QPixmap>

FRAMELESSHELPER_USE_NAMESPACE

namespace pawxel {

class SelectWindow : public FramelessWidget {
    Q_OBJECT
public:
    explicit SelectWindow(bool _isDarkMode, QWidget *parent = nullptr);
    ~SelectWindow();

protected:
    QPointer<QHBoxLayout> m_windowLayout;

private:
    bool m_isDarkMode;

public slots:
    void onMultiPixmaps(QList<QPixmap> _lPixs);
};

} // namespace