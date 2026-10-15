#include<stdio.h>
#include<conio.h>

void main()

{
	int i,n,j;
	clrscr();

	printf("\n Enter Value of N : ");
	scanf("%d",&n);

	printf("\nUsing For Loop \n\n");
	for(i=1; i<=n; i=i+2)
	{
		printf(" %d",i);
	}

	printf("\n\nUsing While Loop \n\n");
	j=1;
	while(j<=n)
	{
		printf(" %d",j);
		j=j+2;
	}

	getch();
}