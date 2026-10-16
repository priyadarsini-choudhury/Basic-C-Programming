// convert celsius to farenheit
#include<stdio.h>
void convert(int);
void main()
{
	convert(60);
	
}
void convert(int c)
{ int f;
	printf(" enter a number=");
	scanf("%d",&c);
	f=c*9/5+32;
	printf("farenheit=%d",f);
	
}