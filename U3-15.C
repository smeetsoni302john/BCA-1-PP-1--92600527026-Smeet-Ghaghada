/* Enter Roll no,Marks of 5 subjects
 and find out Total,Percentage,Result and Grade */

#include<stdio.h>
#include<conio.h>

void main()

{
	int Rno,s1,s2,s3,s4,s5,total;
	float per;

	clrscr();

	printf("\n Enter your Roll no. : ");
	scanf("%d",&Rno);

	printf("\n Enter marks of Subject 1 : ");
	scanf("%d",&s1);

	printf("\n Enter marks of Subject 2 : ");
	scanf("%d",&s2);

	printf("\n Enter marks of Subject 3 : ");
	scanf("%d",&s3);

	printf("\n Enter marks of Subject 4 : ");
	scanf("%d",&s4);

	printf("\n Enter marks of Subject 5 : ");
	scanf("%d",&s5);

	total=s1+s2+s3+s4+s5;
	printf("\n Total : %d",total);

	per=total/5;
	printf("\n Percentage : %.2f",per);

	if(s1>=35&&s2>=35&&s3>=35&&s4>=35&&s5>=35)
	{
		printf("\n Pass");
	}
	else
	{
		printf("\n Fail");
	}

	if(per>=70 && 100>per)
	{
		printf("\n Distinction");
	}

	if(per>=60 && 70>per)
	{
		printf("\n First Class");
	}

	if(per>=50 && 60>per)
	{
		printf("\n Second Class");
	}

	if(per>=35 && 50>per)
	{
		printf("\n Pass Class");
	}

	getch();

}