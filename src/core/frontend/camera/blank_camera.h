// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/frontend/camera/factory.h"
#include "core/frontend/camera/interface.h"

namespace Camera {

class BlankCamera final : public CameraInterface {
public:
    void StartCapture() override;
    void StopCapture() override;
    void SetResolution(const Service::CAM::Resolution&) override;
    void SetFlip(Service::CAM::Flip) override;
    void SetEffect(Service::CAM::Effect) override;
    void SetFormat(Service::CAM::OutputFormat) override;
    std::vector<u16> ReceiveFrame() const override;

private:
    int width = 0;
    int height = 0;
    bool output_rgb = false;
};

class BlankCameraFactory final : public CameraFactory {
public:
    std::unique_ptr<CameraInterface> Create(int camera_id) const override;
};

} // namespace Camera
