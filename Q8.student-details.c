#include<stdio.h>//develop a c program to create student structure,read two student details and print the student details who have scored the highest
void main()
{
	printf("the following program is to create student structure,read two student details and \nprint the student details who have scored the highest\n\n");
	typedef struct 
	{
		char usn[20];
		char name[30];
		char section[5];
		char dept[10];
		float fees;
		int marks;
	}student;
	student s1,s2;
	printf("enter the 1st student details:\n");
	printf("USN:");
	gets(s1.usn);
	printf("\nname:");fflush(stdin);
	gets(s1.name);
	printf("\nsection:");
	gets(s1.section);
	printf("\ndepartment:");
	gets(s1.dept);
	printf("\nfees:");
	scanf("%f",&s1.fees);
	printf("\ntotal marks:");
	scanf("%d",&s1.marks);

	printf("enter the 2nd student details:\n");fflush(stdin);
	printf("USN:");
	gets(s2.usn);
	printf("\nname:");fflush(stdin);
	gets(s2.name);
	printf("\nsection:");fflush(stdin);
	gets(s2.section);
	printf("\ndepartment:");
	gets(s2.dept);
	printf("\nfees:");
	scanf("%f",&s2.fees);
	printf("\ntotal marks:");
	scanf("%d",&s2.marks);
	printf("\nstudent with highest marks\n");
	if(s2.marks>s1.marks)
	{
		printf("\nUSN:%s\nname:%s\nsection:%s\ndepartment:%s\nfees:%.2f\ntotal marks:%d",s2.usn,s2.name,s2.section,s2.dept,s2.fees,s2.marks);
	}
	
	if(s2.marks<s1.marks)
	{
		printf("\nUSN:%s\nname:%s\nsection:%s\ndepartment:%s\nfees:%.2f\ntotal marks:%d",s1.usn,s1.name,s1.section,s1.dept,s1.fees,s1.marks);
	}
}
