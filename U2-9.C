//WAP to Interchange Two number without using third variable
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("\n Before Interchange the value of a & b :");
	scanf("%d%d",&a,&b);

	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Interchange the value of a & b :%d %d",a,b);
	getch();
}


