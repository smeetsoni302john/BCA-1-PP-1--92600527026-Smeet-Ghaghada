#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y,max;
	clrscr();

	printf("\n Enter value of x : ");
	scanf("%d",&x);

	printf("\n Enter value of y : ");
	scanf("%d",&y);

	max = (x>y)?x:y;
	printf("\n max value is : %d",max);

	getch();
}
