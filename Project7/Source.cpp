#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, i;
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = 1; i <= b; i++)
	{
		printf("%d * %d = %d\n", a, i, a * i);
	}
	return 0;
}