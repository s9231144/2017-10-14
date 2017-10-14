#include<stdio.h>
#include<stdlib.h>

int main(void)
{
a:
	double a, b;

	printf("Enter #of hours worked (-1 to end):");
	scanf_s("%lf", &a);

	if (a == -1)
	{
		system("pause");
		return 0;
	}

	else
	{
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%lf", &b);
		if (a > 40)
		{
			printf("Salary is $%0.2lf\n", (a-40)*1.5*b+40*b);
		}
		else
		{
			printf("Salary is $%0.2lf\n", a * b);
		}
		
	}

	goto a;
}