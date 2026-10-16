#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number =\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{if(a<c)
	{
		printf("%d is smaller ",a);
	}
	else
	{
		printf("%d is samller",c);
	}
	}
	else
	{
		if(b<c)
		{
			printf("%d is smaller",b);
		}
		else
		{
			printf("%d is smaller",c);
		}
	}
}