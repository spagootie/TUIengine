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

    void DrawLineLow(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
    void DrawLineHigh(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);



public:

void DrawBox(uint16_t tlx, uint16_t tly, uint16_t brx, uint16_t bry);

void DrawCircle(uint16_t x, uint16_t y, uint16_t r);

void DrawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);

void DrawChar(char c, uint32_t dx, uint32_t dy);

void PrintStr(const char *str, uint32_t offx, uint32_t offy);

Drawer(Framebuffer& fb);
};

#endif
