#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
	printf("Playing ... \n");
	PlaySound("Boing.wav", NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
	
	getch();

	return 0;
}
