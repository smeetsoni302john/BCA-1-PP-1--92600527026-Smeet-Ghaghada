#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j;
	clrscr();

	printf("Using For Loop \n\n");
	for(i=100; i>=90; i--)
	{
		printf("   %d",i);
	}

	printf("\n\nUsing While Loop \n\n");
	j=100;
	while(j>=90)
	{
		printf("   %d",j);
		j=j--;
	}

	getch();
}