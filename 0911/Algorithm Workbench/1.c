#include <stdio.h>
#include <stdint.h>

uint16_t parse_bin16(const char* s) {
    uint16_t v = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '0' || s[i] == '1') {
            v = (uint16_t)((v << 1) | (s[i] - '0'));
        }
    }
    return v;
}

int main(void) {
    printf("%u\n", parse_bin16("00111111"));
    printf("%u\n", parse_bin16("0011111111111111"));
    return 0;
}