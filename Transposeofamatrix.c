#include<stdio.h>
int main()
{
	int a[3][3],t[3][3],i,j;
	printf("enter array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[j][i]=a[i][j];
		}
		printf("transpose of a matrix is :");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",t[j][i]);
		
		}
		printf("\n");
}
	
}
