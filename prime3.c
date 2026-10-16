#include<stdio.h>
void prime_num();
void main()
{
	prime_num();
	
}
void prime_num()
{
	int i=1,n,count=0;
	printf("enter your number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%2==0)
	{
			count++;
		
		
	}
	if(count==2)
	{
		printf("prime number");
	}
}