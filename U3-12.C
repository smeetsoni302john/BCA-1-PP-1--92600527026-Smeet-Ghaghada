//WAP that find out character is in uppercase or lowercase

#include<stdio.h>
#include<conio.h>

void main()

{
	char ch;
	clrscr();

	printf("\n Enter any character :");
	scanf("%ch",&ch);

	if(ch>=65 && ch<=90)
		printf("\n Uppercase Character" );
	else if(ch>=97 && ch<=122)
	     {
		printf("\n Lowercase Character" );
	     }
	     else if(ch>=48 && ch<=57)
	     {
		printf("\n Digit");
	     }
		getch();
}