#include <iostream>
#include <vector>
#include <string>
#include "framebuffer.h"
#include "draw.h"

void Drawer::DrawLineLow(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2) {
    int16_t dx = x2 - x1;
    int16_t dy = y2 - y1;
    int16_t m = dy/dx;
    int16_t d = 2 * dy - dx;
    int16_t y = y1;

    uint16_t yi = 1;
    if (dy < 0) {
        yi = -1;
        dy = -dy;
    }

    for (int x = x1; x <= x2; x++) {
        fb.PutPixel(x, y, true);
        if (d > 0) {
            y += yi;
            d += (2 * (dy - dx));
        } else {
            d += 2*dy;
        }
    }
}

void Drawer::DrawLineHigh(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2) {
    int16_t dx = x2 - x1;
    int16_t dy = y2 - y1;
    int16_t m = dy/dx;
    int16_t d = 2 * dx - dy;
    int16_t x = x1;

    uint16_t xi = 1;
    if (dy < 0) {
        xi = -1;
        dy = -dy;
    }

    for (int y = y1; y <= y2; y++) {
        fb.PutPixel(x, y, true);
        if (d > 0) {
            x += xi;
            d += (2 * (dx - dy));
        } else {
            d += 2*dx;
        }
    }
}

void Drawer::DrawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2) {
    if (abs(y2 - y1) < abs(x2 - x1)) {
        if (x1 > x2)
            DrawLineLow(x2, y2, x1, y1);
        else
            DrawLineLow(x1, y1, x2, y2);
    } else {
        if (y1 > y2)
            DrawLineHigh(x2, y2, x1, y1);
        else
            DrawLineHigh(x1, y1, x2, y2);
    }
}

void Drawer::DrawBox(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2) {
    DrawLine(x1, y1, x2, y1);
    DrawLine(x1, y1, x1, y2);
    DrawLine(x2, y1, x2, y2);
    DrawLine(x1, y2, x2, y2);
}

Drawer::Drawer(Framebuffer& myfb) : fb(myfb) {
}
