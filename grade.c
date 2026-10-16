#include <stdio.h>
int main()
{
	float sub1, sub2, sub3, sub4, sub5, tot_mark, per;
	char grade1, grade2, grade3, grade4, grade5;
	printf("enter the mark of c programming=\n");
	scanf("%f", &sub1);
	printf("enter the mark of software=\n");
	scanf("%f", &sub2);
	printf("enter the mark of RDBMS=\n");
	scanf("%f", &sub3);
	printf("enter the mark of IOT=\n");
	scanf("%f", &sub4);
	printf("enter the mark of CXDP=\n");
	scanf("%f", &sub5);
	// SUBJECT 1
	if (sub1 >= 90 && sub1 < 100)
	{
		grade1 ='O';
	}

	else if (sub1 >= 80 && sub1 < 90)
	{

		grade1 ='E';
	}

	else if (sub1 >= 70 && sub1 < 80)
	{
		grade1 ='A';
	}

	else if (sub1 >= 60 && sub1 < 70)
	{
		grade1 ='B';
	}

	else if (sub1 >= 50 && sub1 < 60)
	{
		grade1 ='C';
	}

	else if (sub1 >= 40 && sub1 < 50)
	{
		grade1 ='D';
	}

	else
	{
		grade1 ='F';
	}
	// subject 2
	if (sub1 >= 90 && sub1 < 100)
	{
		grade2 = 'O';
	}

	else if (sub1 >= 80 && sub1 < 90)
	{

		grade2 = 'E';
	}

	else if (sub1 >= 70 && sub1 < 80)
	{
		grade2 = 'A';
	}

	else if (sub1 >= 60 && sub1 < 70)
	{
		grade2 = 'B';
	}

	else if (sub1 >= 50 && sub1 < 60)
	{
		grade2 = 'c';
	}

	else if (sub1 >= 40 && sub1 < 50)
	{
		grade2 = 'D';
	}

	else
	{
		grade2 = 'f';
	}
	// subject 3
	if (sub1 >= 90 && sub1 < 100)
	{
		grade3 = 'O';
	}

	else if (sub1 >= 80 && sub1 < 90)
	{

		grade3 = 'E';
	}

	else if (sub1 >= 70 && sub1 < 80)
	{
		grade3 = 'A';
	}

	else if (sub1 >= 60 && sub1 < 70)
	{
		grade3 = 'B';
	}

	else if (sub1 >= 50 && sub1 < 60)
	{
		grade3 = 'c';
	}

	else if (sub1 >= 40 && sub1 < 50)
	{
		grade3 = 'D';
	}

	else
	{
		grade3 = 'f';
	}

	// subject 4
	if (sub1 >= 90 && sub1 < 100)
	{
		grade4 = 'O';
	}

	else if (sub1 >= 80 && sub1 < 90)
	{

		grade4 = 'E';
	}

	else if (sub1 >= 70 && sub1 < 80)
	{
		grade4 = 'A';
	}

	else if (sub1 >= 60 && sub1 < 70)
	{
		grade4 = 'B';
	}

	else if (sub1 >= 50 && sub1 < 60)
	{
		grade4 = 'c';
	}

	else if (sub1 >= 40 && sub1 < 50)
	{
		grade4 = 'D';
	}

	else
	{
		grade4 = 'f';
	}
	// subject 5

	if (sub1 >= 90 && sub1 < 100)
	{
		grade5 = 'O';
	}

	else if (sub1 >= 80 && sub1 < 90)
	{

		grade5 = 'E';
	}

	else if (sub1 >= 70 && sub1 < 80)
	{
		grade5 = 'A';
	}

	else if (sub1 >= 60 && sub1 < 70)
	{
		grade5 = 'B';
	}

	else if (sub1 >= 50 && sub1 < 60)
	{
		grade5 = 'c';
	}

	else if (sub1 >= 40 && sub1 < 50)
	{
		grade5 = 'D';
	}

	else {
			grade5 = 'f';
		}
	printf("\ncenturion university of technology and management\n");
	printf("student name=priyadrsini choudhury\t\t  roll number=266320100097");
	printf("\nbranch=MCA \t\t\t year=2026\n");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("-");
	printf("\n SEMESTER-1\n\n");
	printf("subject name");
	printf("\t full marks\t\t");
	printf("obtained marks\t\t");
	printf("grade\n");
	// subject 1
	printf("c programming");
	printf("\t 100");
	printf("\t %f", sub1);
	printf("%c\n", grade1);
	// subject 2
	printf("software");
	printf("\t 100");
	printf("\t %f", sub2);
	printf("%c\n", grade2);
	// subject 3
	printf("RDBMS");
	printf("\t 100");
	printf("\t %f", sub3);
	printf("%c\n", grade3);
	// subject 4
	printf("IOT");
	printf("\t 100");
	printf("\t %f", sub4);
	printf("%c\n", grade4);
	// subject 5
	printf("CXDP");
	printf("\t 100");
	printf("\t %f", sub5);
	printf("%c\n", grade5);
	for (int i = 0; i <= 90; i++)
		printf("-");
		
tot_mark = sub1 + sub2 + sub3 + sub4 + sub5;
per = tot_mark / 5;
printf("\n total marks=100");
printf("\t total marked secured =%f", tot_mark);
printf("\t percentage=%f", per);
}