#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double YearMoney;
	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%lf", &YearMoney);
	printf("10���� �����µ� �ɸ��� �ð�(����: ��): %.2lf", 100000.0 / YearMoney);
	return 0;
}