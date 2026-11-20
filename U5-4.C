//WAP to find out Sum of digits using UDF

#include<stdio.h>
#include<conio.h>

int sum(int z);
void main()
{
	int x,y,s;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&x);
	y = sum(x);

	printf("\n Sum is : %d",y);
	getch();
}
int sum(int z)
{
	int s=0,y;
	while (z>0)
	{
		y=z%10;
		s=s+y;
		z=z/10;
	}
	return(s);
}