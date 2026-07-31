//WAP which displays odd & Even number by if condition
#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y;
	clrscr();
	printf("\n Enter any Number :");
	scanf("%d",&x);
	y= x % 2;

	if (y==0)

	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
	getch();
}


