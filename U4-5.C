#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j;
	clrscr();

	printf("Using For Loop \n\n");
	for(i=200; i>=180; i--)
	{
		printf("   %d",i);
	}

	printf("\n\nUsing While Loop \n\n");
	j=200;
	while(j>=180)
	{
		printf("   %d",j);
		j=j--;
	}
	getch();
}