//WAP to display the person is eligible for vote or not
#include<stdio.h>
#include<conio.h>

void main()

{
	int X,Y;
	clrscr();

	printf("\n Enter any number : ");
	scanf("%d",&X);

	printf("\n Enter any number : ");
	scanf("%d",&Y);


	if(X==Y)
	{
		printf("Number is equal ");
	}
	else
	{
		printf("Number is not equal ");
	}
	getch();
}