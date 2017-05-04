#ifndef WS2812_h
#define WS2812_h

#include "../../SmingCore/SmingCore.h"

// Write one byte
void ICACHE_FLASH_ATTR ws2812_writebyte(uint8_t gpio, char data);

// Byte triples in the buffer are interpreted as R G B values and sent to the hardware as G R B.
int ICACHE_FLASH_ATTR ws2812_writergb(uint8_t gpio, char *buffer, size_t length);

#endif
