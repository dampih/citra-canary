// Copyright 2019 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <QWidget>

namespace Ui {
class ConfigureEnhancements;
}

class ConfigureEnhancements : public QWidget {
    Q_OBJECT

public:
    explicit ConfigureEnhancements(QWidget* parent = nullptr);
    ~ConfigureEnhancements();

    void ApplyConfiguration();
    void RetranslateUI();
    void SetConfiguration();

private:
    void updateShaders(bool anaglyph);
    void updateTextureFilter(const QString&);

    Ui::ConfigureEnhancements* ui;
    QColor bg_color;
};
