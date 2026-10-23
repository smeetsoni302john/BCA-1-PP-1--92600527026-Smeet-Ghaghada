//U4-13

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,rev=0,y;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&x);

	while (x>0)
	{
		y=x%10;
		rev=rev*10+y;
		x=x/10;
	}

	printf("\n Reverse is : %d",rev);
	getch();
}
