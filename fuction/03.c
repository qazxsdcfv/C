#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int x);

int main() {
    int num;

    printf("정수 입력: ");
    scanf("%d", &num);

    printf("%d! = %d", num, factorial(num));

    return 0;
}

int factorial(int x) {
    if (x <= 1) {
        return 1;
    }
    else {
        return (x * factorial(x - 1));
    }
}