#include<stdio.h>
#include<conio.h>

void main()

{
	int x=15;
	clrscr();

	printf("\n %-5d",x);
	printf("\n %5d",x);
	printf("\n %+5d",x);
	printf("\n %05d",x);

	getch();
}