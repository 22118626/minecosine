#ifndef GameEngine_H
#define GameEngine_H

#include "./Video.hpp"

class GameEngine{
    public:
    GameEngine();
    void shutDownGameEngine();
    void step();

    private:
    Video video;
};


#endif