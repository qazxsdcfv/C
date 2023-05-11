#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int star, layer, space, i;

	printf("Ãþ¼ö ÀÔ·Â: ");
	scanf("%d", &layer);
	printf("\n");

	for (i = 1; i <= layer; i++) {
		for (space = 0; space < layer - i; space++) {
			printf(" ");
		}
		for (star = 1; star <= 2 * i - 1; star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}