#include<stdio.h>
int main()
{
	char op;
	int n1,n2;
	scanf("%d %d %c",&n1,&n2,&op);
	switch(op)
	{
		case'+':printf("%d+%d=%d",n1,n2,n1+n2);break;
		case'-':printf("%d-%d=%d",n1,n2,n1-n2);break;
		case'*':printf("%d*%d=%d",n1,n2,n1*n2);break;
		case'/':printf("%d/%d=%d",n1,n2,n1/n2);break;
		case'%':printf("modulud=%d",n1%n2);break;
		default:printf("invalid");
	}
}
