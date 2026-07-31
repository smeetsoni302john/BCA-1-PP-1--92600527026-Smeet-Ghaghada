//WAP to display Area of a Rectangle
#include<stdio.h>
#include<conio.h>

void main()

{
	int a,l,b;
	clrscr();
	printf("\n Enter the value of l :");
	scanf("%d",&l);

	printf("\n Enter the value of b :");
	scanf("%d",&b);

	a=l*b;

	printf("\n Area of Rectangle is : %d",a);
	getch();
}