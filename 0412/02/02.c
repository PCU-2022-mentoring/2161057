#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define PI 3.14

int main() {
	int radius;
	double area;

	printf("�������� �Է��Ͻÿ� : ");
	scanf("%d", &radius);

	area = PI * radius * radius;
	printf("���� ���� : %lf\n", area);

	return 0;
}