#include<stdio.h>
int main()
{
	int a[3][3],i,j,flag=0;
	printf("enter the array elements");
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
			if(j>i&&a[i][j]!=0)
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("matrix is lower triangular matrix");
	}
	else
	{
		printf("matrix is not a lower triangular matrix");
	}
	return 0;
}
