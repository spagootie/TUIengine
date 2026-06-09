#include <iostream>
#include "framebuffer.h"
#include "draw.h"

int main() {
    Framebuffer fb(100, 30);
    

    Drawer d(fb);

    d.DrawLine(20, 20, 50, 0);
    d.DrawBox(20, 20, 60, 60);
    fb.BitmapToBraille();
    fb.BufferText(1, 2, "hi");

    fb.Refresh();
}
