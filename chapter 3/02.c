#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double mile, meter;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &mile);
	meter = mile * 1609;
	printf("%.1lf ������ %.2lf�����Դϴ�.", mile, meter);
	return 0;
}