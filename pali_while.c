#include<stdio.h>
int main()
{
	int n,rev=0,rem,original;
	printf("enter a number=\n");
	scanf("%d",&n);
	original=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	if(original==rev)
	{
		printf("%d is palindrom",rev);
		
	}
	else
	{
		printf("%d is not plaindrom",rev);
	}
}