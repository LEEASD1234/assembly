#include <stdio.h>
#include <string.h>

void intToBinary(int num, char* binaryStr) {
    char temp[32];
    int index = 0;

    if (num == 0) {
        strcpy(binaryStr, "0");
        return;
    }


    while (num > 0) {
        temp[index++] = (num % 2) + '0';
        num = num / 2;
    }

    for (int i = 0; i < index; i++) {
        binaryStr[i] = temp[index - i - 1];
    }
    binaryStr[index] = '\0';
}

int main() {
    int number;
    char binary[33];

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    intToBinary(number, binary);

    printf("이진수: %s\n", binary);

    return 0;
}
