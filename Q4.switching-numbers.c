#include<stdio.h>//Implement a program to interchange the largest and smallest numbers in the given array
void main()
{
	int a[10],i,pos=0,pos1=0,num;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("Enter the elements\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<num;i++)
	{
		if(a[pos]<a[i])
		{
			pos=i;
		}
	}
	for(i=1;i<num;i++)
	{
		if(a[pos1]>a[i])
		{
			pos1=i;
		}
	}
	i=a[pos];
	a[pos]=a[pos1];
	a[pos1]=i;
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}
	
}
