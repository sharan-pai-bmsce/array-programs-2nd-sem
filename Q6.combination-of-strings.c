#include<stdio.h>//Implement a program to concatenate two strings without using built in functions
void main()
{
	int i=0, j=0;
	char str1[30],str2[30],str3[60];
	printf("enter the 1st string\n");
	gets(str1);
	printf("enter the 2nd string\n");
	gets(str2);
	while(str1[i]!='\0')
	{
		str3[i]=str1[i];
		i++;
	}
	while(str2[j]!='\0')
	{
		str3[i]=str2[j];
		i++;
		j++;
	}
	str3[i]='\0';
	printf("'%s' is combined string\n",str3);
}
