//WAP that input two value and find Maximum
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
		if(A>B)
		{
			printf("\n Maximum is A ");
			printf("\n Square is = %d",A*A);
		}
		else
		{
			printf("\n Maximum is B ");
			printf("\n Square is = %d",B*B);
		}
	}

	getch();
}