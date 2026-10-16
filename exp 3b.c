#include<stdio.h>
int main()
{
	int i=1, n,sum=0;
	printf("enter a number=");
	scanf("%d",&n);
	while(i<=n)
	{
	sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);
}