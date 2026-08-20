//WAP tp display Square and Cube of a number
#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y,z;
	clrscr();

	printf("\n Enter Number of x : ");
	scanf("%d",&x);

	y=x*x;
	printf("\n Square is : %d",y);

	z=x*x*x;
	printf("\n Cube is : %d",z);

	getch();
}