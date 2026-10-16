#include<stdio.h>
void main()
{
	int arr_sum[10];
	int i,sum=0;
	printf("enter your numbers in array=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr_sum[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+arr_sum[i];
	}
	printf("sum of all numbers in array=%d",sum);
}