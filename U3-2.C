//WAP that input two value and find Minimum
#include<stdio.h>
#include<conio.h>

void main()

{
	int A,B;
	clrscr();

	printf("\n Enter value of A :");
	scanf("%d",&A);

	printf("\n Enter value of B :");
	scanf("%d",&B);

	if(A==B)
	{
		printf("\n Both are same ");
	}
	else
	{
		printf("\n Both are not equal ");
		if(A<B)
		{
			printf("\n Minimum is A ");


		}
		else
		{
			printf("\n Minimum is B ");

		}

	}

	getch();
}