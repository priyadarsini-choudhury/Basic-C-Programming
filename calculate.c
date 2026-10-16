//print weeks year etc using function
#include<stdio.h>
void calculate();
void main()
{
	calculate();
	
}
void calculate()
{
	int total_days,years,weeks,rem_days;
	printf("enter the total number of days=");
	scanf("%d",&total_days);
	years=total_days/365;
	weeks=(total_days%365)/7;
	rem_days=(total_days%365)%7;
	printf("\n%d total days is equivalent to=\n",total_days);
	printf("years=%d\n",years);
	printf("weeks=%d\n",weeks);
	printf("days=%d",rem_days);
}
