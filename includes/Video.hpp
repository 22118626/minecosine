#ifndef VIDEO_HPP
#define VEIDEO_HPP

#include "./Camera.hpp"
#include "./Misc.hpp"
#include <fxcg/display.h>


class UIObject {
    public:
    UIObject();
    char name[16];
    short int PositionX;
    short int PositionY;
    unsigned short int width;
    unsigned short int height;
    void* data;
    bool visible;
    void modifyData(void*);
};

class UI{
    public:
    UIObject UIobjects[16];
    void ClearUI();
    void UpdateUI(UIObject object);
    void UpdateUI();
};

class Video {
    public:
    Video();
    Camera camera;
    UI uiFrame;
};

#endif