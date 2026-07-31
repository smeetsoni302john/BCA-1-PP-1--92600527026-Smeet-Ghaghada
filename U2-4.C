//WAP to display Area of a Circle
#include<stdio.h>
#include<conio.h>

void main()

{
	int a,r;
	clrscr();
	printf("\n Enter the value of r :");
	scanf("%d",&r);

	a=3.14*r*r;
	printf("\n Area of Circle is : %d",a);

	getch();
}
