#include <iostream>
#include "framebuffer.h"
#include "draw.h"

int main() {
    Framebuffer fb(20, 10);
    
    fb.PutPixel(0, 0, true);
    fb.PutPixel(0, 1, true);

    Drawer d(fb);

    d.DrawLine(2, 2, 15, 15);

    fb.Refresh();
}
