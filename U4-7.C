//wap that give Multiplication of any Number

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,n;
	clrscr();

	printf("Enter the Number: ");
	scanf("%d",&n);

	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",n,i,n*i);
	}
	getch();
}