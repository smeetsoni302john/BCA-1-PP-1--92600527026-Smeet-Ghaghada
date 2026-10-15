//Print 1to10

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j;
	clrscr();

	printf("Using For Loop \n\n");
	for(i=1;i<=10;i++)
	{
		printf(" %d",i);
	}

	printf("\n");

	for(i=1;i<=10;i++)
	{
		printf(" %d",i*i);
	}

	printf("\n");

	for(i=1;i<=10;i++)
	{
		printf(" %d",i*i*i);
	}

	printf("\n\nUsing While Loop \n\n");
	j=1;
	while(j<=10)
	{
		printf(" %d ",j);
		j++;
	}
	printf("\n");
	j=1;
	while(j<=10)
	{
		printf(" %d",j*j);
		j=j+1;
	}
	printf("\n");
	j=1;
	while(j<=10)
	{
		printf(" %d",j*j*j);
		j=j+1;
	}

	getch();
}