#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	q:
	double a, b, c, d, e;
	
	printf("Enter account number(-1 to end):");
	scanf_s("%lf", &a);
	if (a == -1)
	{
		system("pause"); 
		return 0;
	}
	else
	{
			
			printf("Enter beginning blance:");
			scanf_s("%lf", &b);
			printf("Enter total charges:");
			scanf_s("%lf", &c);
			printf("Enter total credits:");
			scanf_s("%lf", &d);
			printf("Enter credit limit:");
			scanf_s("%lf", &e);
		if (b + c - d > e)
		{
			printf("Credit Limit Exceeded\n");
			printf("Account:%lf\n", a);
			printf("Credit limit:%0.2lf\n", e);
			printf("Blance:%0.2lf\n", b + c - d);
		}
		 

	}
	goto q;
}