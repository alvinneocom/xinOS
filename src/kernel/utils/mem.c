#ifndef MEM
#define MEM

#include <stdint.h>
#include <glob.h>

void __attribute__((optimize("O2"))) *memset(void *s, uint8_t c, size_t n) {
    for (size_t i = 0; i < n; i++) {
        ((char *) s)[i] = (uint8_t)c;
    }
    return s;
}

void __attribute__((optimize("O2"))) *memset_word(void *s, uint16_t c, size_t n) {
    for (size_t i = 0; i < n; i++) {
        ((uint16_t *) s)[i] = c;
    }
    return s;
}

void __attribute__((optimize("O2"))) *memcpy(void *dest, const void *src, size_t n) {
    for (size_t i = 0; i < n; i++) {
        ((uint8_t *) dest)[i] = ((uint8_t*) src)[i];
    }
    return dest;
}

#endif