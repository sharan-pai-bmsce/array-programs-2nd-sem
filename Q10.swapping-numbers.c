#include<stdio.h>
void swap(int* num1,int* num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
void main()
{
	int a,b;
	printf("enter the two numbers\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("the numbers are swapped\n%d\t%d",a,b);
}
