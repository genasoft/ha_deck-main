#pragma once

#define LGFX_USE_V1
#include <LovyanGFX.hpp>

#define TFT_WIDTH 320
#define TFT_HEIGHT 480

namespace esphome {
namespace hd_device {

class LGFX : public lgfx::LGFX_Device
{
  lgfx::v1::Panel_ST7796 _panel_instance;
  lgfx::v1::Bus_Parallel8 _bus_instance;
  lgfx::v1::Light_PWM _light_instance;
  lgfx::v1::Touch_FT5x06 _touch_instance;

public:
  LGFX(void);
};

}  // namespace ha_deck
}  // namespace esphome
