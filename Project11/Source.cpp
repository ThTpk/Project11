#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	printf("%d", x);
	if (x < 10)
	{
		printf("less than 10");
	}
	return 0;
}