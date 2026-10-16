//prime factorization using function
#include<stdio.h>
void prime_num();
void main()
{
	prime_num();
}
void prime_num()
{
	int n,i,mul=1;
	printf("enter a number=");
	scanf("%d",&n);
	printf("prime factorization  ");
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d",i);
			mul=mul*i;
			n=n/i;
		}
		
	}
	printf("%d \t",mul);
	
	
}