//WAP to display the person is eligible for vote or not
#include<stdio.h>
#include<conio.h>

void main()

{
	int X;
	clrscr();

	printf("\n Enter your Age : ");
	scanf("%d",&X);

	if(X>=18)
	{
		printf("Eligible for vote ");
	}
	else
	{
		printf("Not Eligible for vote ");
	}
	getch();
}