#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,per,obt_mark;
	int tot_mark;
	
	printf("enter the marker 1 =");
	scanf("%f",&m1);
	printf("enter the marker 2=");
	scanf("%f",&m2);
	printf("enter the marker 3 =");
	scanf("%f",&m3);
	printf("enter the marker 4 =");
	scanf("%f",&m4);
	printf("enter the marker 5 =");
	scanf("%f",&m5);
	obt_mark=m1+m2+m3+m4+m5;
	printf("%d",obt_mark);
}