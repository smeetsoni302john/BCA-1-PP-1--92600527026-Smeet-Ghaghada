//wap which displays sum of the number
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("\n Enter value of x : ");
	scanf("%d", &x);

	printf("\n Enter value of y : ");
	scanf("%d", &y);

	z=x+y;
	printf("\n %d Addition is the answer",z);

	z=x-y;
	printf("\n %d Substraction is the answer",z);

	z=x*y;
	printf("\n %d Multiplication is the answer",z);

	z=x/y;
	printf("\n %d Division is the answer",z);


	getch();
}