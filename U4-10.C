//wap that accept 10 value from user and display it's total

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,sum=0,n;
	clrscr();

	for (i = 1; i <= 10; i++)
	{
		printf("\n Enter number : ");
		scanf("%d",&n);
		sum+=n;
	}
	printf("sum: %d",sum);
	getch();
}