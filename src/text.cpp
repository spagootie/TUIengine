/*#include "font.h"
#include "framebuffer.h">
static uint32_t bgcolor = 0x0;
static uint32_t fgcolor = 0xFFFFFFFF;
static uint8_t blinktracker = 0;
static uint32_t offx, offy;
//static void *fbstart;
static uint64_t fb_addr;
static uint16_t xres;
static uint16_t yres;

void Printer::DrawChar(char c, int dx, int dy)
{
        int cx,cy;
        int8_t mask[8]={128,64,32,16,8,4,2,1};
        int8_t *character = (int8_t*) __font_bitmap__[c];
        for(cy=0;cy<16;cy++) {
                for(cx=0;cx<8;cx++){
                        placepixel((dx * 8 ) + cx, (dy * 16) + cy, character[cy] &mask[cx] ?true : false);
                }

        }
}

void printstr(int8_t *str) {
	for (uint32_t i; *str != '\0'; i++, offx++, *str++) {
		if (offx >= xres/8) {
			offx = 0;
			offy++;
		}
		if (offy >= yres/16) offy = 0;

		switch(*str) {
			case '\n':
				offx = -1;
				offy++;
				break;
			case '\b':
				if (offx > 0) offx = offx - 1;
				drawchar(' ', offx, offy);
				offx--;
				break;
			default:
				drawchar(*str, offx, offy);
		}
	}
}
*/
