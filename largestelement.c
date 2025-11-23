#include<stdio.h>
int main()
{
	int a[5];
	int i,large;
	large=a[0];
	printf("enter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[5]);
	}
	for(i=1;i<5;i++)
	{
		if(a[i]>a[0])
		{
			large=a[i];
		}
	}
	printf("largest element is %d",large);
	return 0;
}
