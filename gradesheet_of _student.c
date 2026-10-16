#include<stdio.h>
char grade(float mark)
{
	if(mark>=90 && mark<=100)  
	return 'o';
	else if(mark>=80 && mark<90)
	return 'E';
	else if(mark>=70 && mark<80)
	return 'A';
	else if(mark>=60 && mark<70)
	return 'B';
	else if(mark>=50 && mark<60)
	return 'C';
	else if(mark>=40 && mark<50)
	return 'D';
	else 
	return 'F';
	}
	int main()
	{
		float phy,chem,bio,comp,math,obt_mark;
		char name[50],branch[30];
		int reg_no,year,tot_mark;
		printf("enter your name and regd no:\n");
		scanf("%s%d",&name,&reg_no);
		printf("enter your branch and year of joining:\n");
		scanf("%s%d",&branch,&year);
		printf("enter mark obtained in phy,chem,bio,comp,math:\n");
		scanf("%f%f%f%f%f",&phy,&chem,&bio,&comp,&math);
		obt_mark=phy+chem+bio+comp+math;
		printf("CENTURION UNIVERSITY OF TECHNOLOGY AND MANAGEMENT\n");
		printf("NAME=\t%c\t redg_no=%d\n",name,reg_no);
		printf("branch=%s\t year=%d\n",branch,year);
		printf("\n 1ST SEMESTER\n");
		printf("SUBJECTS \t\t TOTAL MARK \t OBTAINED MARK \t GRADE\n");
		scanf("%f\t\t%d\t%f\t");
		
		return 0;
	}