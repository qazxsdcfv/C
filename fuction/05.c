#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void max(int x, int y, int z);
void min(int x, int y, int z);

int main() {
    int num1, num2, num3;

    printf("�� ���� �Է�: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max(num1, num2, num3);
    min(num1, num2, num3);

    return 0;
}

void max(int x, int y, int z) {
    if (x > y) {
        if (x > z) {
            printf("�ִ�: %d\n", x);
        }
        else {
            printf("�ִ�: %d\n", z);
        }
    }
    else {
        if (y > z) {
            printf("�ִ�: %d\n", y);
        }
        else {
            printf("�ִ�: %d\n", z);
        }
    }
}

void min(int x, int y, int z) {
    if (x < y) {
        if (x < z) {
            printf("�ּڰ�: %d\n", x);
        }
        else {
            printf("�ּڰ�: %d\n", z);
        }
    }
    else {
        if (y < z) {
            printf("�ּڰ�: %d\n", y);
        }
        else {
            printf("�ּڰ�: %d\n", z);
        }
    }
}