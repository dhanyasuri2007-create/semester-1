#include<stdio.h>
#include<math.h>
int main()
{
	double num,sqrts;
	printf("enter number");
	scanf("%lf",&num);
	if(num<0)
	{
		printf("invalid");
	}
	else 
	{
		sqrts=sqrt(num);
		printf("square root = %lf",sqrts);
	}
	return 0;
}
