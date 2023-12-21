#include "../includes/Video.hpp"
#include <math.h>
#include <string.h>

void drawPixel(short X,short Y, unsigned short color) {
    if (X > 384 || Y > 216 || X < 0 || Y < 0) {
        drawPixel(50,1, 0xF00F);
        return;
    }

    unsigned short* vRAMPointer = (unsigned short*) GetVRAMAddress();
    vRAMPointer += Y*384 + X;
    *vRAMPointer = color;
}
    
void drawRectangle(int X1, int Y1, int X2, int Y2, unsigned short colorIn, unsigned short colorOut) {
    Bdisp_AllClr_VRAM();
    PrintXY(1,1, "drawRectangle start", TEXT_MODE_NORMAL, TEXT_COLOR_RED );
    int height = Y2-Y1;
    int width = (X2-X1);
    color_t * vRAMPointer2 = (color_t*) GetVRAMAddress();
    vRAMPointer2+= Y1*384 + X1;
    *vRAMPointer2 = 0x0000;
    Bdisp_PutDisp_DD();
    while (height--) {
        unsigned width2 = width;
        while (width2--) {
            *vRAMPointer2++ = colorIn;
            Bdisp_PutDisp_DD();
        }
        vRAMPointer2 += 384 - width;
    }
    for (int x = X1; x < X2 && x < 384; x++) {
        drawPixel(x, Y1, colorOut);
        drawPixel(x, Y2, colorOut);
    }
    for (int y = Y1; y < Y2 && y < 216; y++) {
        drawPixel(X1, y, colorIn);
        drawPixel(X2, y, 0x3fc4);
    }

}

UIObject::UIObject() {
    const char* string = " ";
    strncpy(name, string, sizeof(name)-1); name[sizeof(name)-1] = '\0';
}
void UIObject::modifyData(void* data) {
    data = data;
}



void UI::ClearUI() {
    for (auto& a : UIobjects) {a = UIObject();}
}
void UI::UpdateUI(UIObject object) {
    //append object to the list of UIobjects
    for (auto a : UIobjects) {
        if (a.name[0] == ' ' ) {
            a = object;
            break;
        }
    }
}
void UI::UpdateUI() {
    //render UI
    for(auto item : UIobjects) {
        if (item.name[0] != ' ') {
            drawRectangle(item.PositionX, item.PositionY, item.PositionX+item.width, item.PositionY+item.height, 0x00F0, 0xF00F);
        }   
    }
}


Video::Video() {
    color_t *p = (color_t*)GetVRAMAddress();
    int i;
    p+=LCD_WIDTH_PX*2
    for (i = 0; i < LCD_WIDTH_PX; i++) *p++ = COLOR_BLUE;
    p+= LCD_WIDTH_PX * (LCD_HEIGHT_PX - 3);
    Bdisp_PutDisp_DD()
    Camera camera;
    UI uiFrame;
}