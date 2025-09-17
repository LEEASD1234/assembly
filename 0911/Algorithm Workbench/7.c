#include <stdio.h>
#include <string.h>

char* binaryToHex(const char* binStr) {
    static char hexStr[100];
    int len = strlen(binStr);
    int value = 0, count = 0, pos = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (binStr[i] == '1') value += (1 << count);
        count++;
        if (count == 4 || i == 0) {
            if (value < 10) hexStr[pos++] = '0' + value;
            else hexStr[pos++] = 'A' + (value - 10);
            count = 0;
            value = 0;
        }
    }
    hexStr[pos] = '\0';
    for (int i = 0; i < pos / 2; i++) {
        char t = hexStr[i];
        hexStr[i] = hexStr[pos - 1 - i];
        hexStr[pos - 1 - i] = t;
    }
    return hexStr;
}

int main() {
    char input[100];
    printf("2진수 입력: ");
    fgets(input, sizeof(input), stdin);

    printf("16진수 표현: %s\n", binaryToHex(input));
    return 0;
}
