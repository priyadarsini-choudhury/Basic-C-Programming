#include<stdio.h>
int main()
{
	int sum=0;
	int marks[]={1,2,3,4,7,8,9};
	for(int i=0;i<7;i++)
	{
		printf("%d",marks[i]);
		sum+=i;
		
	}printf("sum=%d",sum);
}