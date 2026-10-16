#include<stdio.h>
void check_num();
void main()
{
check_num();	
}
void check_num()
{
	int num;
	printf("enter your number=");
	scanf("%d",&num);
	if(num>0)
	{
		printf("positive");
		
	}
	else if(num<0)
	{
		printf("negative");
		
	}
	else
	{
		printf("zero");
	}
}