#include<stdio.h>
int even_odd();
void main()
{
	even_odd();
}
int even_odd()
{
	int num;
	printf("enter a number=");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is a even number",num);
	
	}
	else
	{
		printf("%d is a odd number",num);
	}
}
