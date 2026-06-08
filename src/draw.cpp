#include <iostream>
#include <vector>
#include <string>
#include "framebuffer.h"
#include "draw.h"

void Drawer::DrawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2) {
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


Drawer::Drawer(Framebuffer& myfb) : fb(myfb) {
}
