#include <stdio.h>

int main(int argc, char *argv[])
{
	int n1;
	int n2;

	printf("请输入第一个整数：");
	scanf("%d", &n1);

	printf("请输入第二个整数：");
	scanf("%d", &n2);

	printf("%d+%d=%d\n", n1, n2, n1 + n2);
	
	return 0;
}
