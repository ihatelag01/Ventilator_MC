#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::analogUpdate(uint32_t value)
{
	memset(&textArea1Buffer,0,TEXTAREA1_SIZE);
	Unicode::snprintfFloat(textArea1Buffer,sizeof(textArea1),"%0.2f", value/28.51);
	textArea1.invalidate();
}
