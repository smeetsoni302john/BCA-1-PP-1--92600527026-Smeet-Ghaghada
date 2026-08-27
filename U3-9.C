/*WAP to input two value from user and check
whether the first number is divisible by second or not.*/

#include<stdio.h>
#include<conio.h>

void main()

{
	int num1,num2;
	clrscr();

	printf("\n Enter Number 1 : ");
	scanf("%d",&num1);

	printf("\n Enter Number 2 : ");
	scanf("%d",&num2);

	if ( num2 != 0 )

		{
			if( num1 % num2 == 0 )
			{
				printf("\n It is Divisible by second number");
			}

			else

			{
				printf("\n It is not Divisible by second number");
			}
		}
		else
		{
			printf("\n Not possible operation");
		}

	getch();

}