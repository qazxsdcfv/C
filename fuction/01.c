#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double size(int x, double y);

int main() {
	int r;
	double pi;

	printf("������ �Է�: ");
	scanf("%d", &r);
	printf("���̰� �Է�: ");
	scanf("%lf", &pi);

	printf("���� ����: %.2lf", size(r, pi));

	return 0;
}

double size(int x, double y) {
	return x * x * y;
}