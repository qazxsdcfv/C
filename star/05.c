#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int star, space, size, i;

	printf("날개 크기 입력: ");
	scanf("%d", &size);

	for (i = 1; i <= size; i++) {
		for (star = 1; star <= i; star++) {
			printf("*");
		}
		for (space = 0; space <= size - star; space++) {
			printf(" ");
		}
		for (star = size; star >= i; star--) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= size; i++) {
		for (space = size; space >= i; space--) {
			printf(" ");
		}
		for (star = 1; star <= i; star++) {
			printf("*");
		}
		for (space = 1; space < i; space++) {
			printf(" ");
		}
		for (star = 0; star <= size - space; star++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}