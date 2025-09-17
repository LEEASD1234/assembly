#include <stdio.h>
#include <string.h>

long long binaryToDecimal(const char* binStr) {
    long long result = 0;
    for (int i = 0; binStr[i] != '\0' && binStr[i] != '\n'; i++) {
        result <<= 1;
        if (binStr[i] == '1') {
            result += 1;
        } else if (binStr[i] != '0') {
            break;
        }
    }
    return result;
}

int main() {
    char input[100];
    printf("2진수 입력: ");
    fgets(input, sizeof(input), stdin);

    long long n = binaryToDecimal(input);
    printf("10진수 표현: %lld\n", n);

    return 0;
}
