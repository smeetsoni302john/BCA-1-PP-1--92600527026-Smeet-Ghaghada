//Print 1to10 Square and Cube

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j,n;
	clrscr();

	printf("Enter the Number : ");
	scanf("%d",&n);

	printf("\n Using For Loop \n\n");

	for(i=1;i<=n;i++)
	{
		printf(" %d",i*i);
	}

	printf("\n");

	for(i=1;i<=n;i++)
	{
		printf(" %d",i*i*i);
	}

	printf("\n\nUsing While Loop \n\n");

	j=1;
	while(j<=n)
	{
		printf(" %d",j*j);
		j=j+1;
	}
	printf("\n");
	j=1;
	while(j<=n)
	{
		printf(" %d",j*j*j);
		j=j+1;
	}

	getch();
}