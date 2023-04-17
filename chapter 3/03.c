#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double wid, hei;
	printf("삼각형의 밑변: ");
	scanf("%lf", &wid);
	printf("삼각형의 높이: ");
	scanf("%lf", &hei);
	printf("삼각형의 넓이: %.2lf", wid * hei / 2);
	return 0;
}