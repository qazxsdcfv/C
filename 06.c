#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int star, space, layer, i;

	printf("마름모의 대각선의 길이: ");
	scanf("%d", &layer);
	printf("\n");

	for (i = 1; i <= layer / 2; i++) {
		for (star = layer / 2; star >= i; star--) {
			printf("*");
		}
		for (space = 1; space < i; space++) {
			printf(" ");
		}
		for (space = 1; space < i; space++) {
			printf(" ");
		}
		for (star = layer / 2; star >= i; star--) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= layer / 2; i++) {
		for (star = 0; star < i; star++) {
			printf("*");
		}
		for (space = layer / 2; space > i; space--) {
			printf(" ");
		}
		for (space = layer / 2; space > i; space--) {
			printf(" ");
		}
		for (star = 0; star < i; star++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}