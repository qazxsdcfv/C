#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int star, layer, space, i, j;
	j = 0;

	printf("Ãþ¼ö ÀÔ·Â: ");
	scanf("%d", &layer);
	printf("\n");

	for (i = 1; i <= layer; layer--) {
		for (space = 0; space < j; space++) {
			printf(" ");
		}
		for (star = layer; star > 0; star--) {
			printf("*");
		}
		printf("\n");
		j++;
	}

	return 0;
}