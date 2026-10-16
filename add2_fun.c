//addition of two number.
#include<stdio.h>
//function decelare
//no return type and no parameter
void sum();
//function call
void main()
{
sum();	
printf("\nend of the program");
}
//function defined
void sum()
{
	int a,b,add;
	printf("enter two number=\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("sum=%d",add);
}