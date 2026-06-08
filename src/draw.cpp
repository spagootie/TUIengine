#include <iostream>
#include <vector>
#include <string>
#include "framebuffer.h"
#include "draw.h"

void Drawer::DrawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2) {
    uint16_t dx = x2 - x1;
    uint16_t dy = y2 - y1;
    uint16_t m = dy/dx;
    uint16_t y;
    
    for (int i = x1; i <= x2; i++) {
        y = m * (i - x1) + y1;
        fb.PutPixel(i, y, true);
    }
}


Drawer::Drawer(Framebuffer& myfb) : fb(myfb) {
}
