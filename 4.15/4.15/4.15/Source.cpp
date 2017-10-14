#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void)
{

	for (double i = 0.095; i < 0.125; i=i+0.005)
	{
		double a,b = 5000;
		a = b* pow(1.0 + i, 15);
		
		printf("%0.1lf  =%0.1lf¤¸\n",i*100,a);
	}
	
	system("pause");
	return 0;
}