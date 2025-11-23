#include<stdio.h>
int main()
{
	int speed,time,distance;
	printf("enter spped and time");
	scanf("%d %d",&speed,&time);
	distance=speed*time;
	printf("distance=%d",distance);
	return 0;
}
