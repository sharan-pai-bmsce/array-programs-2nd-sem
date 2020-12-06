#include<stdio.h>//Develop a program to find average of n numbers
void main()
{
	int i,array[10],num;
	float sum=0,average;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter %d numbers\n",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<num;i++)
	{
		sum=sum+array[i];
	}
	average=sum/num;
	printf("the average of %d numbers=%f\n",num,average);
}
