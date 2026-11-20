//WAP to find out addition of two values using UDF

#include<stdio.h>
#include<conio.h>

void main()

{
	int x=10,y=5,z;
	clrscr();

	z=sum(x,y);
	printf("\n sum is : %d",z);
	getch();

	z=sub(x,y);
	printf("\n Sub is : %d",z);
	getch();

	z=mul(x,y);
	printf("\n mul is : %d",z);
	getch();

	z=div(x,y);
	printf("\n Div is : %d",z);
	getch();
}
int sum (int a,int b)
{
	int c;
	c=a+b;
	return (c);
}
int sub (int a,int b)
{
	int s;
	s=a-b;
	return (s);
}
int mul ( int a,int b)
{
	int m;
	m=a*b;
	return (m);
}
int div ( int a,int b)
{
	int d;
	d=a/b;
	return (d);
}