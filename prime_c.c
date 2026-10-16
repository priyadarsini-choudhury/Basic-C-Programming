#include<stdio.h>
void prime();
void main()
{
	prime();
	
}
void prime()
{
	int num,count=0,i;
	printf("enter a number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0){
			
		count++;
		}
		
	}
	if(count==2)
	{
		printf("prime number");
	}
}