//WAP to input your percentage and display wether it is pass or fail
#include<stdio.h>
#include<conio.h>

void main()

{
	int x;
	clrscr();
	printf("\n Enter your Number ;");
	scanf("%d",&x);

	if (x>33)

	{
		printf("\n you are pass");
	}
	else
	{
		printf("\n you are Fail");
	}

	getch();
}