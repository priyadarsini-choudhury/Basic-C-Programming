#include<stdio.h>
int main()
{
	int sum=0,n,i=1;
	printf("enter a number=");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("the sum of the number=%d",sum);
}