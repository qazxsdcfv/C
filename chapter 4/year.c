#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year;
	printf("�⵵�� �Է��Ͻÿ�: ");
	scanf("%d", &year);
	year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? printf("�����Դϴ�.") : printf("������ �ƴմϴ�.");
	return 0;
}