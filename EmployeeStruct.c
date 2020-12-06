#include<stdio.h>//develop a program to print the details of an employee using structures
void main()
{
	struct employee
	{
		char name[20];
		int  number;
		int salary;
		char gender[10];
		char profession[20];
	};
	struct employee s;
	int num,i;
		printf("enter the %d employee's name\n",i+1);fflush(stdin);i-1;
		gets(s.name);
		printf("enter the  employee number\n");
		scanf("%d",&s.number);
		printf("enter the salary\n");
		scanf("%d",&s.salary);
		printf("enter the gender\n");fflush(stdin);
		gets(s.gender);
		printf("enter his role in company\n");
		gets(s.profession);
		
	printf("name:%s\nemployee no.:%d\nemployee salary:%d\ngender:%s\nrole in company:%s\n",s.name,s.number,s.salary,s.gender,s.profession);
		
}
