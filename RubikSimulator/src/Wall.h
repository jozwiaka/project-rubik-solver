#ifndef WALLHPP
#define WALLHPP
#include <iostream>
#include <array>
#include "Element.h"
class Wall
{
private:
public:
    Element e[9];
    Wall();
    Wall(std::string s[9]);
    ~Wall();
    std::string getStr();
    void show();
    void rotateR();
    void rotateL();
    Wall &operator=(Wall &w);
};

#endif