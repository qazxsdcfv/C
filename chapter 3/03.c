#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double wid, hei;
	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &wid);
	printf("�ﰢ���� ����: ");
	scanf("%lf", &hei);
	printf("�ﰢ���� ����: %.2lf", wid * hei / 2);
	return 0;
}