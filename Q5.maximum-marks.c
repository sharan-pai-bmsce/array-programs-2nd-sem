#include<stdio.h>//Program to read two dimensional array marks which stores marks of 5 students in 3 subjects and display the highest marks in each subject
void main()
{
	int i,j,a[3][4];
	printf("enter the details:\nstudent number\tmaths\tscience\tenglish\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int pos=0;
	for(i=1;i<3;i++)
	{
		if(a[pos][1]<a[i][1])
		{
			pos=i;
		}	
	}
	printf("student %d has scored maximum marks in maths\tmarks=%d\n",pos+1,a[pos][1]);
	pos=0;
	for(i=1;i<3;i++)
	{
		if(a[pos][2]<a[i][2])
		{
			pos=i;
		}	
	}
	printf("student %d has scored maximum marks in science\tmarks=%d\n",pos+1,a[pos][2]);
	pos=0;
	for(i=1;i<3;i++)
	{
		if(a[pos][3]<a[i][3])
		{
			pos=i;
		}
	}
	printf("student %d has scored maximum marks in english\tmarks=%d\n",pos+1,a[pos][3]);
	
}
