#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			printf(" ");;
		}
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");;
		}
		printf("\n");;
	}
	for (int i = 4; i >= 1; i--)
	{
		for (int j = i; j<5; j++)
		{
			printf(" ");
		}

		for (int k = 0; k<(2 * i) - 1; k++){
			printf("*");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}