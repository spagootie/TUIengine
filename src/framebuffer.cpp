#include <iostream>
#include <vector>

class Framebuffer {
private:
	// a bitmap framebuffer to represent pixels
	std::vector<bool> fb;

public:

uint8_t SwapBits(uint8_t byte, unsigned int a, unsigned int b) {
    // get the ath bit
    uint8_t mask = 0x01 << a - 1;
    uint8_t tmp = (byte & mask) >> a - 1;

    // clear the ath bit
    byte = ~(0x01 << a - 1 ) & byte;
    // set the ath bit
    byte = byte | (tmp << a - 1);

    // clear the bth bit
    byte = ~(0x01 << b - 1) & byte;
    // set the bth bit
    byte = byte | (tmp << b - 1);

    return byte;
}

// Everything over which I have might that cannot be torn from me remains my property!
std::string UnicodeToUTF8(unsigned int codepoint)
{
    std::string out;

    if (codepoint <= 0x7f)
        out.append(1, static_cast<char>(codepoint));
    else if (codepoint <= 0x7ff)
    {
        out.append(1, static_cast<char>(0xc0 | ((codepoint >> 6) & 0x1f)));
        out.append(1, static_cast<char>(0x80 | (codepoint & 0x3f)));
    }
    else if (codepoint <= 0xffff)
    {
        out.append(1, static_cast<char>(0xe0 | ((codepoint >> 12) & 0x0f)));
        out.append(1, static_cast<char>(0x80 | ((codepoint >> 6) & 0x3f)));
        out.append(1, static_cast<char>(0x80 | (codepoint & 0x3f)));
    }
    else
    {
        out.append(1, static_cast<char>(0xf0 | ((codepoint >> 18) & 0x07)));
        out.append(1, static_cast<char>(0x80 | ((codepoint >> 12) & 0x3f)));
        out.append(1, static_cast<char>(0x80 | ((codepoint >> 6) & 0x3f)));
        out.append(1, static_cast<char>(0x80 | (codepoint & 0x3f)));
    }
    return out;
}


	
