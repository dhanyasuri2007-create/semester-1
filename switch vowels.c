#include<stdio.h>
int main()
{
	int vowel;
	printf("enter a vowel");
	scanf("%c",&vowel);
	switch(vowel)
	{
		case 'a':printf("a is vowel");
		break;
		case 'e':printf("e is vowel");
		break;
		default : printf("not vowel");
	}
}
