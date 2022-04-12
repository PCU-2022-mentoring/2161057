#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	double x;
	double y;
	double sum;

	

	printf("x와 y를 입력하시오 >> ");
	scanf("%lf %lf", &x, &y);
	
	sum = x + y;

	printf("두 수의 합: %lf", sum);

	return 0;
}