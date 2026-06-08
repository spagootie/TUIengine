#include <iostream>
#include <vector>
#include <string>

#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H

class Framebuffer {
private:
    uint8_t fbwidth;
    uint8_t fbheight;

	std::vector<uint8_t> fb;

public:

uint8_t GetWidth();

uint8_t GetHeight();

void PutPixel(uint8_t x, uint8_t y, bool state);

// swap bits a and b in a byte
uint8_t SwapBits(uint8_t byte, unsigned int a, unsigned int b);

// translate the dots represented as bits to an offset for Unicode
uint8_t ByteToBraille(uint8_t byte);

// Everything over which I have might that cannot be torn from me remains my property!
// Translates a codepoint to a Unicode character.
std::string UnicodeToUTF8(unsigned int codepoint);

uint8_t GetByte(uint8_t x, uint8_t y);

std::string BitmapToBraille();
	
void Refresh();

Framebuffer(uint8_t x, uint8_t y);
};

#endif
