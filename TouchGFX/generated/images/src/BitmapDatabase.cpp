// 4.16.0 0x59922cbf
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_buttons_round_edge_icon_button[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID = 0, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_edge_icon_button_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID = 1, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_edge_small[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID = 2, Size: 170x60 pixels
extern const unsigned char image_blue_buttons_round_edge_small_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID = 3, Size: 170x60 pixels
extern const unsigned char image_cpu_fan_512[]; // BITMAP_CPU_FAN_512_ID = 4, Size: 512x512 pixels
extern const unsigned char image_thermometer_png_icon_19[]; // BITMAP_THERMOMETER_PNG_ICON_19_ID = 5, Size: 320x320 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_blue_buttons_round_edge_icon_button, 0, 60, 60, 7, 6, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_icon_button_pressed, 0, 60, 60, 7, 6, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 46, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_small, 0, 170, 60, 11, 4, 148, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 50, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_small_pressed, 0, 170, 60, 11, 4, 148, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 50, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_cpu_fan_512, 0, 512, 512, 61, 482, 388, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 28, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_thermometer_png_icon_19, 0, 320, 320, 108, 125, 77, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 182, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
