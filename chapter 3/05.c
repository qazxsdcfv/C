#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, result;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	result = 3 * x * x + 7 * x + 11;
	printf("���׽��� ���� %.2lf", result);
	return 0;
}