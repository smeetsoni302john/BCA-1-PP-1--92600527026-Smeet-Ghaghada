//WAP to display hra,ta,da,pf and salary

#include<stdio.h>
#include<conio.h>

void main()

{
	float salary,hra,ta,da,pf,gross_salary;
	clrscr();

	printf("\n Enter salary :");
	scanf("%f",&salary);

	if (salary>=5000)

		{
			hra=(5.0/100)*salary;
			ta=(6.0/100)*salary;
			da=(4.0/100)*salary;
			pf=(5.0/100)*salary;
		}

		else

		{
			hra=(4.0/100)*salary;
			ta=(5.0/100)*salary;
			da=(3.0/100)*salary;
			pf=(4.0/100)*salary;
		}

		gross_salary = salary+hra+ta+da-pf;

		printf("\n Salary =%2f",salary);
		printf("\n HRA =%2f",hra);
		printf("\n TA =%2f",ta);
		printf("\n DA =%2f",da);
		printf("\n PF =%2f",pf);
		printf("\n Gross Salary =%2f",gross_salary);

		getch();
}