#include <iostream>
#include "framebuffer.h"
#include "draw.h"

int main() {
    Framebuffer fb(50, 20);
    
    fb.PutPixel(0, 0, true);
    fb.PutPixel(0, 1, true);

    Drawer d(fb);

    d.DrawLine(2, 2, 130, 100);

    fb.Refresh();
}
