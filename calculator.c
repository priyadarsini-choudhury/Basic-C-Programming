#include<stdio.h>
int main()
{ 
	float a,b;
	int ch;
	printf("1. addition\n");
	printf("2. subtraction\n");
	printf("3. multiplication\n");
	printf("4. division\n");
	printf("enter your choice=");
	scanf("%d",&ch);
	printf("enter two numbers=\n");
	scanf("%f%f",&a,&b);
	switch(ch)
	{
	case 1:printf("addition=%f",a+b);
		break;
		case 2:printf("subtraction=%f",a-b);
		break;
			case 3:printf("mulitiplication=%f",a*b);
		break;
			case 4:printf("division=%f",a/b);
		break;
			
	default :printf("invalid option");
		
		
	}
}