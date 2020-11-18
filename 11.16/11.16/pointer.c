#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c;
	double x1, x2, x3;
	int i;
	printf("输入三个数字：\n");
	scanf_s("%lf,%lf,%lf",&a,&b,&c);
	for (i = 0; i <=3; i++)
	{
		x1 = -0.4*b - 0.2*c - 2.4;
		x2 = 0.25*a - 0.5*c + 5;
		x3 = -0.2*a + 0.3*b + 0.3;
		printf("x1=%lf,x2=%f,x3=%f\n", x1, x2, x3);
		a = x1;
		b = x2;
		c = x3;
	}	
	getch();
	return 0;
}
