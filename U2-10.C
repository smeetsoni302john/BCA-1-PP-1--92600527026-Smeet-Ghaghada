//WAP to input Quantity,Price,Discount
#include<stdio.h>
#include<conio.h>

void main()

{
	int q,p,d,t,fa;
       float drs;
	clrscr();
	printf("\n************************");

	printf("\n Quantity : ");
	scanf("%d",&q);

	printf("\n price : rs ");
	scanf("%d",&p);

	printf("\n__________________________");

	t=q*p;
	printf("\nTotal : %d rs",t);

	printf("\n Disc. (\%) :");
	scanf("%d",&d);

	drs=t*d/100.0;
	printf("\n Disc.(Rs.) : %.2f ",drs);

	printf("\n___________________________");

	fa=t-drs;
	printf("\n Final Amount is :%d rs",fa);

	printf("\n___________________________");
	getch();
}