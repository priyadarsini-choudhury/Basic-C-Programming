#include<stdio.h>
 int main()
 {
 	int num;
 	printf("enter a number in between 0-6=\n");
 	scanf("%d",&num);
	 switch(num)
	 {
	 	case 0:printf("sunday");
	break;
	case 1:printf("monday");
	break;
	case 2:printf("tuesday");
	break;
	case 3:printf("wensday");
	break;
	case 4:printf("thursday");
	break;
	case 5:printf("friday");
	break;
	case 6:printf("saturday");
	break;
	default :printf("end");
}
	 }