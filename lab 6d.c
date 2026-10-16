#include<stdio.h>
void main()
{
	int i,ar[5],count=0,num;
	printf("enter your numbers=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("enter a number to search the elements=");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		if(ar[i]==num)
		{
			count++;
		}
	}
	printf("occurence of a number=%d",count);
}