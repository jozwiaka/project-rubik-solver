#ifndef ELEMENTHPP
#define ELEMENTHPP
#include <iostream>
class Element
{
public:
    std::string color;
    Element();
    Element(const std::string color);
    ~Element();
};
#endif