//wap to print day using function
#include<stdio.h>
int weeks();
void main()
{
weeks();	
}
int weeks()
{
	int day;
	printf("enter your day=");
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("monday");
		break;
		case 2:printf("tuesday");
		break;
		case 3:printf("wendsday");
		break;
		case 4:printf("thursday");
		break;
		case 5:printf("friday");
		break;
		case 6:printf("saturday");
		break;
		default:printf("invalid option");
		break;
	}
}
