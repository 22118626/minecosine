#include "../includes/GameEngine.hpp"
#include <string.h>

GameEngine::GameEngine() {
    color_t *p = (color_t*)GetVRAMAddress();
    int i;
    p+=LCD_WIDTH_PX
    for (i = 0; i < LCD_WIDTH_PX; i++) *p++ = COLOR_GREEN;
    p+= LCD_WIDTH_PX * (LCD_HEIGHT_PX - 3);
    Bdisp_PutDisp_DD()
    Video video;
    UIObject rectangle;
    const char* Name = "Title"; strncpy(rectangle.name, Name, sizeof(rectangle.name)-1); rectangle.name[sizeof(rectangle.name)-1] = '\0';
    rectangle.height = 50;
    rectangle.width = 50;
    rectangle.PositionX = 50;
    rectangle.PositionY = 50;

    video.uiFrame.UpdateUI(rectangle);
};

void GameEngine::step() {
    PrintXY(50,50, "GameEngine::step()", TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
    video.uiFrame.UpdateUI();
    Bdisp_PutDisp_DD();
}

void GameEngine::shutDownGameEngine(){
    
}