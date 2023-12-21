#include <fxcg/display.h>
#include <fxcg/keyboard.h>
#include "../includes/GameEngine.hpp"


bool PROGRAM_RUNNING = true;
bool EXIT_PROGRAM = false;


int main() {
    int key;
    while (PROGRAM_RUNNING) {
        if (EXIT_PROGRAM) {break;}
        GetKey(&key);
        if (key == KEY_CTRL_EXIT) {
            break;
        }
        else if(key == KEY_CTRL_F6) {
            Bdisp_AllClr_VRAM();
            Bdisp_PutDisp_DD();
        }
        else if (key == KEY_CTRL_F1) {
            PrintXY(100,100, "Welcome", TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
            color_t *p = (color_t*)GetVRAMAddress();
            int i;
            for (i = 0; i < LCD_WIDTH_PX; i++) *p++ = COLOR_RED;
            p+= LCD_WIDTH_PX * (LCD_HEIGHT_PX - 3);
            for (i = 0; i < LCD_WIDTH_PX; i++) *--p = COLOR_RED;
            Bdisp_PutDisp_DD();
            GameEngine gameEngine;
            gameEngine.step();
        }
    } 
    return 0;
}