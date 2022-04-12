#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int x;
	int y;
	int sum;

	printf("x와 y를 입력하시오 >> ");
	scanf("%d %d", &x,&y);
	

	sum = x + y;

	printf("두 수의 합: %d", sum);

	return 0;
}