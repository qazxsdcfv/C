#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double YearMoney;
	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%lf", &YearMoney);
	printf("10억을 모으는데 걸리는 시간(단위: 년): %.2lf", 100000.0 / YearMoney);
	return 0;
}