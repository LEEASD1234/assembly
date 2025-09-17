#include <stdio.h>
#include <string.h>
#include <ctype.h>

long long hexToDecimal(const char* hexStr) {
    long long result = 0;
    for (int i = 0; hexStr[i] != '\0' && hexStr[i] != '\n'; i++) {
        char c = toupper(hexStr[i]);
        int value;
        if (c >= '0' && c <= '9') {
            value = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        } else {
            break;
        }
        result = result * 16 + value;
    }
    return result;
}

int main() {
    char input[100];
    printf("16진수 입력: ");
    fgets(input, sizeof(input), stdin);

    long long n = hexToDecimal(input);
    printf("10진수 표현: %lld\n", n);

    return 0;
}
