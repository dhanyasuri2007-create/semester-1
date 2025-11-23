#include<stdio.h>
int main()
{
	int units;
	float amount,charge,total;
	printf("enter units:");
	scanf("%d",&units);
	if(units<=100)
	{amount=units*2.00;
	charge=50;
	}
	else if(units<=150)
	{amount=units*3.00;
	charge=60;
	}
	else if(units<=200)
	{amount=units*4.00;
	charge=70;
	}
	else
	{
		amount=units=5.00;
		charge=80;
	}
	total=amount+charge;
	printf("total=%.2f",total);
}
