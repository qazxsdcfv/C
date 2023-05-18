#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void max(int x, int y, int z);
void min(int x, int y, int z);

int main() {
    int num1, num2, num3;

    printf("°ª ¼¼°³ ÀÔ·Â: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max(num1, num2, num3);
    min(num1, num2, num3);

    return 0;
}

void max(int x, int y, int z) {
    if (x > y) {
        if (x > z) {
            printf("ÃÖ´ñ°ª: %d\n", x);
        }
        else {
            printf("ÃÖ´ñ°ª: %d\n", z);
        }
    }
    else {
        if (y > z) {
            printf("ÃÖ´ñ°ª: %d\n", y);
        }
        else {
            printf("ÃÖ´ñ°ª: %d\n", z);
        }
    }
}

void min(int x, int y, int z) {
    if (x < y) {
        if (x < z) {
            printf("ÃÖ¼Ú°ª: %d\n", x);
        }
        else {
            printf("ÃÖ¼Ú°ª: %d\n", z);
        }
    }
    else {
        if (y < z) {
            printf("ÃÖ¼Ú°ª: %d\n", y);
        }
        else {
            printf("ÃÖ¼Ú°ª: %d\n", z);
        }
    }
}