#include <stdio.h>
#include <stdlib.h>

char* intToHexString(long long num) {
    char* hexStr = (char*)malloc(18);
    if (hexStr == NULL) return NULL;

    const char* hexDigits = "0123456789ABCDEF";
    char temp[17];
    int i = 0;
    int isNegative = 0;

    if (num == 0) {
        hexStr[0] = '0';
        hexStr[1] = '\0';
        return hexStr;
    }

    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    while (num > 0) {
        int remainder = num % 16;
        temp[i++] = hexDigits[remainder];
        num /= 16;
    }

    int pos = 0;
    if (isNegative) {
        hexStr[pos++] = '-';
    }
    for (int j = i - 1; j >= 0; j--) {
        hexStr[pos++] = temp[j];
    }
    hexStr[pos] = '\0';

    return hexStr;
}

int main() {
    long long n;
    printf("정수를 입력하세요: ");
    if (scanf("%lld", &n) != 1) {
        printf("입력 오류!\n");
        return 1;
    }

    char* hexStr = intToHexString(n);
    if (hexStr != NULL) {
        printf("16진수 표현: %s\n", hexStr);
        free(hexStr);
    }

    return 0;
}
