#ifndef RUBIKHPP
#define RUBIKHPP
#include <iostream>
#include "Wall.h"

class CubeDisplay
{
private:
    std::string colors[6] = {"W", "G", "R", "U", "O", "Y"};
    // std::string colors[6] = {"U", "L", "F", "R", "B", "D"};
    int r[3] = {2, 5, 8};
    int l[3] = {0, 3, 6};
    int t[3] = {0, 1, 2};
    int b[3] = {6, 7, 8};

public:
    Wall walls[6];
    CubeDisplay(Wall *walls);

    CubeDisplay();

    ~CubeDisplay();

    void init();
    void show();
    void writeToFile(const std::string &path);
    void move(Wall &dst, int *dst_pos, Wall &src, int *src_pos, bool swap = false);
    void R(int n = 1);
    void Ri(int n = 1);
    void L(int n = 1);
    void Li(int n = 1);
    void U(int n = 1);
    void Ui(int n = 1);
    void D(int n = 1);
    void Di(int n = 1);
    void F(int n = 1);
    void Fi(int n = 1);
    void B(int n = 1);
    void Bi(int n = 1);
};
#endif