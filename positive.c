#include<stdio.h>
int main()
{
	int num;
	printf("enter a number=");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is a positive number");
	}
	else
	{
		printf("%d is a negative number");
	}
}