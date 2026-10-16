//wap to print factorial using fun
#include<stdio.h>
int factorial(int);
void main()
{
	factorial(5);
}
int factorial (int n)
{
	int fact=1,i=1;
while(i<=n)
	{
		fact=fact*i;
		i++;
		
	}
	printf("%d",fact);
}