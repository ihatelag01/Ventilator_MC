/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include "main.h"
 
#include "cmsis_os.h"


Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_CPU_FAN_512_ID));
    scalableImage1.setPosition(0, 0, 240, 320);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    textArea1.setXY(57, 11);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));

    buttonWithLabel1.setXY(151, 59);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID3));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
    buttonWithLabel1.setAction(buttonCallback);

    buttonWithLabel2.setXY(35, 59);
    buttonWithLabel2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    buttonWithLabel2.setLabelText(touchgfx::TypedText(T_SINGLEUSEID4));
    buttonWithLabel2.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
    buttonWithLabel2.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
    buttonWithLabel2.setAction(buttonCallback);

    buttonWithLabel3.setXY(35, 221);
    buttonWithLabel3.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel3.setLabelText(touchgfx::TypedText(T_SINGLEUSEID5));
    buttonWithLabel3.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel3.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel3.setAction(buttonCallback);

    buttonWithLabel7.setXY(170, 147);
    buttonWithLabel7.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    buttonWithLabel7.setLabelText(touchgfx::TypedText(T_SINGLEUSEID9));
    buttonWithLabel7.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel7.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel7.setAction(buttonCallback);

    buttonWithLabel8.setXY(95, 147);
    buttonWithLabel8.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    buttonWithLabel8.setLabelText(touchgfx::TypedText(T_SINGLEUSEID10));
    buttonWithLabel8.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel8.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel8.setAction(buttonCallback);

    buttonWithLabel9.setXY(11, 147);
    buttonWithLabel9.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    buttonWithLabel9.setLabelText(touchgfx::TypedText(T_SINGLEUSEID11));
    buttonWithLabel9.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel9.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel9.setAction(buttonCallback);

    add(__background);
    add(scalableImage1);
    add(textArea1);
    add(buttonWithLabel1);
    add(buttonWithLabel2);
    add(buttonWithLabel3);
    add(buttonWithLabel7);
    add(buttonWithLabel8);
    add(buttonWithLabel9);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel1)
    {
        //Interaction3
        //When buttonWithLabel1 clicked execute C++ code
        //Execute C++ code
        HAL_Delay(100);
        user_pwm_setvalue(0);
    }
    else if (&src == &buttonWithLabel2)
    {
        //Interaction2
        //When buttonWithLabel2 clicked execute C++ code
        //Execute C++ code
        HAL_Delay(100);
        user_pwm_setvalue(2000);
    }
    else if (&src == &buttonWithLabel3)
    {
        //Interaction1
        //When buttonWithLabel3 clicked change screen to Screen2
        //Go to Screen2 with no screen transition
        application().gotoScreen2ScreenNoTransition();
    }
    else if (&src == &buttonWithLabel7)
    {
        //Interaction6
        //When buttonWithLabel7 clicked execute C++ code
        //Execute C++ code
        HAL_Delay(100);
        user_pwm_setvalue(1500);
    }
    else if (&src == &buttonWithLabel8)
    {
        //Interaction5
        //When buttonWithLabel8 clicked execute C++ code
        //Execute C++ code
        HAL_Delay(100);
        user_pwm_setvalue(1000);
    }
    else if (&src == &buttonWithLabel9)
    {
        //Interaction4
        //When buttonWithLabel9 clicked execute C++ code
        //Execute C++ code
        HAL_Delay(100);
        user_pwm_setvalue(500);
    }
}
