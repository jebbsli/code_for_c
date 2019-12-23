#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
	printf("H");
	Sleep(500);

	printf("e");
	Sleep(500);

	printf("l");
	Sleep(500);

	printf("l");
	Sleep(500);

	printf("o");
	Sleep(500);

	char *pc = "Hello";
	int length = strlen(pc);

	for (int i = 0; i < length; i++)
	{
		printf("%c", *(pc + i));
		Sleep(500);
	}
	printf("\n");

	for (int i=0; i < 100; i++)
	{
		printf("H");
		Sleep(500);
		printf("\b");
	}
	
	return 0;
}
