#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;
	printf("請輸入矩形寬:");
	scanf_s("%d", &a);
	printf("請輸入矩形長:");
	scanf_s("%d", &b);
	for (int i = a; i > 0; i--)
	{
		printf("+");
	}
	if (b - 2 > 0)
	{
		for (int i = b-2; i > 0; i--)
		{
			printf("\n");
			printf("+");
			for (int i = a-2; i > 0; i--)
				{
					printf(" ");
				}
			printf("+");
		}
		
	}
	printf("\n");
	for (int i = a; i > 0; i--)
	{
		printf("+");
	}
	printf("\n");
	system("pause");
	return 0;
}