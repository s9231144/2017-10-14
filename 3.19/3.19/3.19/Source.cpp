#include<stdio.h>
#include<stdlib.h>

int main(void)
{
a:
	double a,b,c;

	printf("Enter loan principal (-1 to end):");
	scanf_s("%lf", &a);

	if (a == -1)
	{
		system("pause");
		return 0;
	}

	else
	{
		printf("Enter interest rate:");
		scanf_s("%lf", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%lf", &c);
		printf("The interest charge is $:%0.2lf\n", a*b*c / 365);
	}
	
	goto a;
}