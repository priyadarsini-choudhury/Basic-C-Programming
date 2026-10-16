//check the greatest number between 3 number using function
#include<stdio.h>
void greatest();
int main()
{
greatest();	
}
void greatest()
{
	int a,b,c;
	printf("enter a three numbers=\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
}
