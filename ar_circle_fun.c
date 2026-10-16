// area of the circle using function
#include<stdio.h>
void area_circle();
void main(){
	area_circle();
}
void area_circle()
{
	int ar,r;
	printf("enter the radius of the circle=");
	scanf("%d",&r);
	ar=3.14*r*r;
	printf("area=%d",ar);
}