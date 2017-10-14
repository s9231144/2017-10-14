#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    a:
	double a;

	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%lf", &a);
	
	if (a == -1)
	{
		system("pause");
		return 0;
	}
	else
	{
		printf("Salary is:%0.2lf\n",200+0.09*a);

	}
	goto a;
}