#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float total,avg;
	printf("enter marks of 5 subjects");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	total=(s1+s2+s3+s4+s5);
	avg=total/5;
	printf("total=%f",total);
	printf("average=%f",avg);
	return 0;
}
