#include <stdio.h>
#include <stdint.h>
#include <string.h>

int hexCharToInt(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else if (c >= 'A' && c <= 'F')
        return 10 + (c - 'A');
    else if (c >= 'a' && c <= 'f')
        return 10 + (c - 'a');
    else {
        printf("Invalid hex character: %c\n", c);
        return 0;
    }
}

uint32_t hexStringToInt(const char* hexString) {
    uint32_t result = 0;
    int len = strlen(hexString);

    if (len > 8) {
        printf("Error: hex string too long (max 8 characters for 32-bit)\n");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        result <<= 4;
        result |= hexCharToInt(hexString[i]);
    }

    return result;
}

int main() {
    const char* hexStr = "1A3F5C7D";
    uint32_t value = hexStringToInt(hexStr);
    printf("Hex string: %s\n", hexStr);
    printf("Integer value: %u\n", value);
    return 0;
}
