#include <stdio.h>

int main(int argc, char *argv[])
{
	double x1;
	double x2;

	printf("�������һ������");
	scanf("%lf", &x1);

	printf("������ڶ�������");
	scanf("%lf", &x2);

	printf("%.2f * %.2f = %.2f", x1, x2, x1 * x2);
	
	return 0;
}
