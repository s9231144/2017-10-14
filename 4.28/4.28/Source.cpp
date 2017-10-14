#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;double b, c;
	printf("請輸入代號(1=經理 2=時薪工 3=抽傭金工 4=零工):");
	scanf_s("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("請輸入工作週數:");
			scanf_s("%lf", &b);
			printf("請輸入周薪:");
			scanf_s("%lf", &c);
			printf("薪水:%0.2lf元\n",b*c);
			break;
		case 2:
			printf("請輸入工作時數:");
			scanf_s("%lf", &b);
			printf("請輸入時薪:");
			scanf_s("%lf", &c);
			if (b > 40)
			{
				printf("薪水:%0.2lf元\n", (b - 40)*1.5*c + 40 * c);
			}
			else
			{
				printf("薪水:%0.2lf元\n", c * b);
			}
			break;
		case 3:
			printf("請輸入工作週數:");
			scanf_s("%lf", &b);
			printf("請輸入銷售金額:");
			scanf_s("%lf", &c);
			printf("薪水:%0.2lf\n元", b*250+c*0.057);
			break;
		case 4:
			printf("請輸入生產件數:");
			scanf_s("%lf", &b);
			printf("請輸入每件酬勞:");
			scanf_s("%lf", &c);
			printf("薪水:%0.2lf\n元", b*c);
			break;

	}
	system("pause");
	return 0;
}