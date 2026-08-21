//WAP which input year and check it is leap year or not

#include<stdio.h>
#include<conio.h>

void main()

{
	int year;
	clrscr();

	printf("\n Enter any year : ");
	scanf("%d",&year);

	if((year % 4==0 ) && (year % 100 !=0 ) || (year %400 ==0))

	{
		printf("\n Year is leap year");
	}
	else
	{
		printf("\n Year is not leap year");
	}
	getch();

}