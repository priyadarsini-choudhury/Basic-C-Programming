#include<stdio.h>
int main()
{
	int choice;
	float a,b;
	
	printf("1. addition\n");
	printf("2. subtraction\n");
	printf("3. multiplication\n");
	printf("4. division\n");
printf("enter your choice=");
scanf("%d",&choice);
printf("enter two numbers=\n");
scanf("%f%f",&a,&b);
switch(choice)
{
	case 1:printf("addition=%f",a+b);
	break;
	case 2:printf("subtraction=%f",a-b);
	break;
	case 3:printf("multiplication=%f",a*b);
	break;
	case 4:printf("division=%f",a/b);
	break;
	default :printf("invalid option"); 
}

}