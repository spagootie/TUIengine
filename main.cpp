#include <iostream>
#include "src/framebuffer.h"

int main() {
    Framebuffer fb(20, 10);
    
    fb.PutPixel(0, 2, true);
    fb.Refresh();
}
