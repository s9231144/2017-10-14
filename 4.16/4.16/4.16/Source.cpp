#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("(A)");
	for (int i = 0; i < 10;i++)
	{
		printf("\n");
		for (int j = i; j >0 ; j--)
		{
			printf("*");
		}
	}
	printf("\n");
	printf("(B)");
	for (int i = 10; i >0; i--)
	{
		printf("\n");
		for (int j = i; j >0; j--)
		{
			printf("*");
		}
	}
	printf("\n");
	printf("(C)");
	for (int i = 10; i >0; i--)
	{
		printf("\n");
		for (int k = 10; k >i; k--)
			{
				printf(" ");

			}
		for (int j = i; j >0; j--)
		{

			printf("*");
		}
	}
	printf("\n");
	printf("(D)");
	for (int i = 0; i <10; i++)
	{
		printf("\n");
		for (int k = 10; k >i; k--)
		{
			printf(" ");

		}
		for (int j = i; j >0; j--)
		{

			printf("*");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}