//wap that print 0,1,1,2,3,5,8,13...n

#include<stdio.h>
#include<conio.h>

void main()

{
	int n1=0,n2=1,s,N;
	clrscr();

	s=n1+n2;

	printf("\n Enter the Number :");
	scanf("%d",&N);

	printf("%d %d %d",n1,n2,s);
	while(s<=N)

	{
		n1=n2;
		n2=s;
		s=n1+n2;
		if(s>N)
		{
			break;
		}
		printf(" %d",s);
	}
	getch();
}