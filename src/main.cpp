#include <iostream>
#include "framebuffer.h"
#include "draw.h"

int main() {
    Framebuffer fb(100, 30);
    

    Drawer d(fb);

    d.DrawBox(20, 20, 60, 60);
    d.DrawLine(20, 60, 60, 20);
    d.DrawLine(20, 20, 60, 60);
    fb.BitmapToBraille();

//    fb.BufferText(0, 2, "hi");

    fb.Refresh();
}
