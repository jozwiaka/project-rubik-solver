#include "Element.h"

Element::Element()
{
    color = "N";
}
Element::Element(const std::string color) : color(color)
{
}
Element::~Element()
{
    // std::cout << "Element destructor" << std::endl;
}