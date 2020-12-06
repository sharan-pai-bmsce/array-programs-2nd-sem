#include<stdio.h>//Develop a C program to perform arithmetic operations on a two integers using pointers
void add(float* a,float* b,float* res)
{
	*res=*a+*b;
}
void subtract(float* a,float* b,float* res)
{
	*res=*a-*b;
}
void multiply(float* a,float* b,float* res)
{
	*res=*a**b;
}
void divide(float* a,float* b,float* res)
{
	*res=*a/(*b);
}
void main()
{
	float x,y;
	char ch;
	float result;
	printf("enter the 2 numbers\n");
	scanf("%f%f",&x,&y);
	printf("enter the operator\n");fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			add(&x,&y,&result);
			break;
		case '-':
			subtract(&x,&y,&result);
			break;
		case '*':
			multiply(&x,&y,&result);
			break;
		case '/':
			divide(&x,&y,&result);
	}
	printf("the result of operation=%.2f\n",result);
}
