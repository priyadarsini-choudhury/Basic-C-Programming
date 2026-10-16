#include<stdio.h>
int main()
{
	int sum=0;
	int marks[]={3,4,5,6,7};
	for(int i=0;i<5;i++)
	{
		if(marks[i]%2==0)
		{
			printf("%d\n",marks[i]);
		}
		else
		{
			printf("%d",marks[i]);
		}
	
	}
}