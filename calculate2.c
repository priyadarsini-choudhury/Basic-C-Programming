//print weeks year etc using function
#include<stdio.h>
void calculate(int);
void main()
{
	calculate(742);
	
}
void calculate(int total_days)
{
	int years,weeks,rem_days;
	
	years=total_days/365;
	weeks=(total_days%365)/7;
	rem_days=(total_days%365)%7;
	printf("\n%d total days is equivalent to=\n",total_days);
	printf("years=%d\n",years);
	printf("weeks=%d\n",weeks);
	printf("days=%d",rem_days);
}
