#include<stdio.h>
void fact(int);
void main()
{
fact(5);	
}
void fact(int a){
	int fact=1,i=1;
	while(i<=a)
	{
		fact=fact*i;
		i++;
	}
	printf("fact=%d",fact);
}