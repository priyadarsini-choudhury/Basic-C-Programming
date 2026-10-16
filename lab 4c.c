#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter a number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		//print space
		for(j=i;j<n;j++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		
		}
		printf(" \n");
	}

}