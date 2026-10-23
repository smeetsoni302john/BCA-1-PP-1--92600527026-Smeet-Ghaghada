//U4-14

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,rev=0,y,tmp;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&x);
	tmp=x;

	while (x>0)
	{
		y=x%10;
		rev=rev*10+y;
		x=x/10;
	}

	printf("\n Reverse is : %d",rev);

	if(rev==tmp)
	{
		printf("\n number is palindrome");
	}
	else
	{
		printf("\n number is not palindrome");
	}
	getch();
}