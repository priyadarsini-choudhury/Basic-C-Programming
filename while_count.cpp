#include<stdio.h>
int main()
{
	int n,i,count;
	printf("enter a number=");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
}
printf("the count number=%d\n",count);

}