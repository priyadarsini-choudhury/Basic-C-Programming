#include<stdio.h>
void swap();
int main()
{
	swap();
	
}
void swap()
{
	int a, b;
	printf("enter a number=\n");
	scanf("%d",&a);
	printf("enter second number=\n");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("/n a=%d and b=%d",a,b);
}