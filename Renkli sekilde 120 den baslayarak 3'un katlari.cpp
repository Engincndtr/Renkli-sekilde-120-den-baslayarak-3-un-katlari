#include<stdio.h>
#include<conio.h>
#include<windows.h>
	void textcolor (int color)
{

	static int __BACKGROUND;
	HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	GetConsoleScreenBufferInfo(h, &csbiInfo);
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
								color + (__BACKGROUND<< 4));
}
main()
{
	int x=1;
	textcolor(5);
	printf("c programing");
	for  (x=1;x<512;x++)
	{
		textcolor(x);
		printf("\tx=%3i",x);
	
	}
	return 0;
}
