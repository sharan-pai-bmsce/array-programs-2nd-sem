#include<stdio.h>//Develop a program to check the given string is palindrome or not
int main()
{
	int length,i=0,j,flag=0;
	char string[30];
	printf("enter the string\n");
	gets(string);
	while(string[i]!='\0')
	{
		i++;
	}
	length=i;
	i=0;
	j=length-1;
	while(i<=j)
	{
		if(string[i]!=string[j])
		{
			flag=1;
		}
		i++;
		j--;
	}
	if(flag==1)
		printf("'%s' not a palindrome\n",string);
	else
		printf("'%s' is a palindrome\n",string);
	return 0;
}
