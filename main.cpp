#include <iostream>



int main() {
    Framebuffer fb(10, 10);
    
    fb.PutPixel(0, 0, true);
    fb.Refresh();
}
