//U4-20(A)

#include<stdio.h>
#include<conio.h>

void main()

{
	int N,i,j;
	clrscr();

	printf("\n Enter value of N : ");
	scanf("%d",&N);

	for (i=1;i<=N;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	getch();
}