#include<stdio.h>
void main()
{
	FILE *fptr=0;
	struct dob
	{
		int date,month,year;
	};
	struct student
	{
		char name[30];
		struct dob d;
		int marks;
	}s;
	char file[30];
	int i;
	printf("enter the file name\n");
	gets(file);
	//PART-1
	fptr=fopen(file,"w");//opening a file in "write" format since we have to create a file first and then edit before the compiler is commanded to read it
	if(fptr==0)
	{
		printf("file has not been opened successfully\n");
	}
	else
	{
		printf("enter the name\n");fflush(stdin);
		gets(s.name);
		printf("enter the date of birth\n");fflush(stdin);
		scanf("%d%d%d",&s.d.date,&s.d.month,&s.d.year);
		printf("enter the marks\n");fflush(stdin);
		scanf("%d",&s.marks);
		fprintf(fptr,"name:%s\tDOB:%d/%d/%d\tmarks:%d\n",s.name,s.d.date,s.d.month,s.d.year,s.marks);
		//printing the data from keyboard to txt file through the c program file(first part)
		
		fclose(fptr);//closing the file opened earlier in "write" format since editting part is done
		//PART-2
		fptr=fopen(file,"r");
		//opening the file again in "read" format since we want the the text present in the file back so that it can be dispayed on output screen
		while(fscanf(fptr,"%s",s.name,&s.d.date,&s.d.month,s.d.year)!=EOF)
		//copying the the data stored in the text file so that it can be displayed on output screen using loop till the end of file
		{
			printf("%s\t",s.name,s.d.date,s.d.month,s.d.year,s.marks);//printing the data stored in the text file on the output screen (2nd part)
		}
	}
	fclose(fptr);//closing the file opened in "read" format so that it doesn't get corrupted
}
