//Wap to display Maximum number
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();

	printf("\n Enter Number of x : ");
	scanf("%d",&x);

	printf("\n Enter Number of y : ");
	scanf("%d",&y);

	printf("\n Enter Number of z : ");
	scanf("%d",&z);

	if(x>y)
	{
		if(x>z)
		{
			printf("\n %d is max",x);
		}
		else
		{
			printf("\n %d is max",z);
		}
	}
	else
	{

		if(y>z)
		{
			printf("\n %d is max",y);
		}
		else
		{
			printf("\n %d is max",z);
		}
	}
	getch();

}