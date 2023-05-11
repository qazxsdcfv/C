#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int star, layer, i;

	printf("รþผ๖ภิทย: ");
	scanf("%d", &layer);
	printf("\n");

	for (i = 1; i <= layer; i++) {
		for (star = 1; star <= i; star++) {
			printf("%d", star);
		}
		printf("\n");
	}

	return 0;
}