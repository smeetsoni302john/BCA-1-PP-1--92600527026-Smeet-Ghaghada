//WAP to diplay Even number using loop

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,j;
	clrscr();

	printf("Using For Loop \n\n");
	for(i=2; i<=20; i=i+2)

	{
		printf(" %d",i);
	}

	printf("\n\nUsing While Loop \n\n");
	j=2;
	while(j<=20)
	{
		printf(" %d",j);
		j=j+2;
	}


	getch();


}