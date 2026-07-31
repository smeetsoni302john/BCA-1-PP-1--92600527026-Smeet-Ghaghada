//WAP which displays interchane two number using third variable
#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y,z;
	clrscr();
	printf("\n Enter value of x :");
	scanf("%d",&x);

	printf("\n Enter value of y ;");
	scanf("%d",&y);

	printf("\n Before interchange the value : x %d y %d",x,y);

	z=x;
	x=y;
	y=z;

	printf("\n After interchange the value : x %d y %d",x,y);

	getch();

}