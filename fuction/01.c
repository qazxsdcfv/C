#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double size(int x, double y);

int main() {
	int r;
	double pi;

	printf("반지름 입력: ");
	scanf("%d", &r);
	printf("파이값 입력: ");
	scanf("%lf", &pi);

	printf("원의 넓이: %.2lf", size(r, pi));

	return 0;
}

double size(int x, double y) {
	return x * x * y;
}