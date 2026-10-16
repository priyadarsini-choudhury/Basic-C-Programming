//use all the function type
#include<stdio.h>
void sum();//no return type and no parameter
void sum1(int,int);//no return and parameter
int sum2();//return and no parameter
int sum3(int,int);//return and parameter
void main(){
	int x;
	sum();//calling sum
sum1(45,54);//calling sum1
	x=sum2();//sum 2
	printf("\n sum2=%d",x);
	int y;//calling sum3
	y=sum3(89,1);
	printf("sum3=%d",y);

}
//function defination
void sum()
{
	int a,b;
	printf("enter two number=\n");
	scanf("%d%d",&a,&b);
	printf("\n sum=%d",(a+b));
}
void sum1(int a,int b)
{
	printf("\n sum1=%d",(a+b));
}
int sum2()
{
	int a,b;
	printf("enter two numbers=\n");
	scanf("%d%d",&a,&b);
return(a+b);
}
int sum3(int a,int b)
{
	return(a+b);
}