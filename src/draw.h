#include <iostream>
#include <vector>
#include <string>

#ifndef DRAWER_H
#define DRAWER_H


class Drawer {
private:
    uint16_t width;
    uint16_t height;

    Framebuffer &fb;

public:

void DrawBox(uint16_t tlx, uint16_t tly, uint16_t brx, uint16_t bry);

void DrawCircle(uint16_t x, uint16_t y, uint16_t r);

void DrawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);

Drawer(Framebuffer& fb);
};

#endif
