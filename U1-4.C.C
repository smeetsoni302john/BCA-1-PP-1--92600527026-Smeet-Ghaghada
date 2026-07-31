//WAP which displays total of marks
#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,c,d,e,z;

	clrscr();
	printf("\n Enter the mark of Maths a: ");
	scanf("%d",&a);

	printf("\n Enter the mark of English b: ");
	scanf("%d",&b);

	printf("\n Enter the mark of science c: ");
	scanf("%d",&c);

	printf("\n Enter the mark of Hindi d: ");
	scanf("%d",&d);

	printf("\n Enter the mark of Gujarati e: ");
	scanf("%d",&e);

	z=a+b+c+d+e;
	printf("\n %d is the answer" ,z);
	getch();


}