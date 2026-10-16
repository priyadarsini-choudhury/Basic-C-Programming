#include<stdio.h>
int main()
{
	int i,n;
	printf("enter five even numbers=");
	for(i=0;i<=5;i++)
	{
		scanf("%d\n",&n);
		if(n%2!=0)
		break;
		
			printf("%d",n);
		
	}
	
}