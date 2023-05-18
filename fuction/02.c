#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int number(int x);
void check(int x);

int main() {
	int num;

	printf("Á¤¼ö ÀÔ·Â: ");
	scanf("%d", &num);

	check(number(num));

	return 0;
}

int number(int x) {
	if (x % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void check(int x) {
	if (x == 1) {
		printf("Â¦¼ö");
	}
	else {
		printf("È¦¼ö");
	}
}