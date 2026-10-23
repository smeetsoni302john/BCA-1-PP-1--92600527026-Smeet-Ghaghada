//U4-15

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,sum=0,y,tmp;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&x);
	tmp=x;

	while (x>0)
	{
		y=x%10;
		sum=sum+(y*y*y);
		x=x/10;
	}

	if(sum==tmp)
	{
		printf("\n number is Armstrong");
	}
	else
	{
		printf("\n number is not Armstrong");
	}
	getch();
}