#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double earth, moon;
	printf("�����Ը� �Է��Ͻÿ�(����: kg): ");
	scanf("%lf", &earth);
	moon = earth * 0.17;
	printf("�޿����� �����Դ� %.2lfkg�Դϴ�.", moon);
	return 0;
}