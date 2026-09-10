//WAP to display whether input character is vovel or not

#include<stdio.h>
#include<conio.h>

void main()

{
	char ch;
	clrscr();

	printf("\n Enter a Character : ");
	scanf("%c",&ch);

	if( ch=='A'|| ch=='E'|| ch=='I'|| ch=='O' || ch=='U'||
	ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')

		printf("\n Vovel");
	else
		printf("\n Not Vovel");

	getch();

}
