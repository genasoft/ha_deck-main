#pragma once

#define LGFX_USE_V1
#include "lovyan_patch.h"
#include <LovyanGFX.hpp>
#include <lgfx/v1/platforms/esp32/Bus_Parallel8.hpp>

#define TFT_WIDTH 320
#define TFT_HEIGHT 480

namespace esphome {
namespace hd_device {

class LGFX : public lgfx::LGFX_Device
{
  lgfx::v1::Panel_ST7796 _panel_instance;

  lgfx::v1::Light_PWM _light_instance;
  lgfx::v1::Touch_FT5x06 _touch_instance;

public:
  LGFX(void);
};

}  // namespace hd_device
}  // namespace esphome
