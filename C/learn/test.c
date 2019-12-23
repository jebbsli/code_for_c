#include <stdio.h>

int main(int argc, char *argv[])
{
	int n; //定义了一个整型变量n

	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("你输入的整数为：%d\n", n);
	printf("下一个整数为：%d\n", n + 1);
	
	return 0;
}
