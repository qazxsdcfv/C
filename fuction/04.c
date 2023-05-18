#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void star(int x);

int main() {
    int size;

    printf("사이즈 입력: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        star(i);
        printf("\n");
    }

    return 0;
}

void star(int x) {
    for (x; x > 0; x--) {
        printf("*");
    }
}