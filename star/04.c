#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int size, star, space, i;

	printf("변의 크기 입력: ");
	scanf("%d", &size);
	printf("\n");

	for (i = 0; i <= size - 1; i++) {
		for (space = 0; space < size - i; space++) {
			printf(" ");
		}
		for (star = 0; star < 2 * i - 1; star++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = size; i >= 1; i--) {
		for (space = size - i; space > 0; space--) {
			printf(" ");
		}
		for (star = 1; star <= 2 * i - 1; star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}