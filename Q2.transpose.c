#include<stdio.h>//Develop a program to print the transpose matrix
void main()
{
	int a[10][10],m,n,i,j;
	printf("enter the size of matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\ntranspose:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[j][i]);
		}printf("\n");
	}
}
