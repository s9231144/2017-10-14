#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;double b, c;
	printf("�п�J�N��(1=�g�z 2=���~�u 3=��Ī��u 4=�s�u):");
	scanf_s("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("�п�J�u�@�g��:");
			scanf_s("%lf", &b);
			printf("�п�J�P�~:");
			scanf_s("%lf", &c);
			printf("�~��:%0.2lf��\n",b*c);
			break;
		case 2:
			printf("�п�J�u�@�ɼ�:");
			scanf_s("%lf", &b);
			printf("�п�J���~:");
			scanf_s("%lf", &c);
			if (b > 40)
			{
				printf("�~��:%0.2lf��\n", (b - 40)*1.5*c + 40 * c);
			}
			else
			{
				printf("�~��:%0.2lf��\n", c * b);
			}
			break;
		case 3:
			printf("�п�J�u�@�g��:");
			scanf_s("%lf", &b);
			printf("�п�J�P����B:");
			scanf_s("%lf", &c);
			printf("�~��:%0.2lf\n��", b*250+c*0.057);
			break;
		case 4:
			printf("�п�J�Ͳ����:");
			scanf_s("%lf", &b);
			printf("�п�J�C��S��:");
			scanf_s("%lf", &c);
			printf("�~��:%0.2lf\n��", b*c);
			break;

	}
	system("pause");
	return 0;
}