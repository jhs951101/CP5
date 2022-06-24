#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int min;

	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);

	if(a < b)
	{
		min = a;
	}
	else
	{
		min = b;
	}

	if(c < min)
	{
		printf("제일 작은 정수는 %d입니다.\n", c);
	}
	else
	{
		printf("제일 작은 정수는 %d입니다.\n", min);
	}

	return 0;
}