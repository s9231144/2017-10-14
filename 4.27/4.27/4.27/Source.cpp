#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	for (int a = 1; a <=500; a++)
	{
		for (int b = 1; b <= 500; b++)
		{
			for (int c = 1; c <= 500; c++)
			{
				if (a*a + b*b == c*c)
				{
					printf("%d,%d   ", a, b);
					
				}
			}
		}
	}
	
	

	system("pause");
	return 0;
}
