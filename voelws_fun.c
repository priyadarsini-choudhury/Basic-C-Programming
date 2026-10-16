#include<stdio.h>
void vowels();
void main()
{
	vowels();
}
void vowels()
{
	
	char alpha;
	printf("enter a alphabet=");
	scanf("%c",&alpha);
	switch(alpha){
	case 'a':printf("%c is  vowles",alpha);
	break;
	case 'e':printf("%c is  vowles",alpha);
	break;
	case 'i':printf("%c is vowles",alpha);
	break;
	case 'o':printf("%c is  vowels",alpha);
	break;
	case 'u':printf("%c is  vowels",alpha);
	break;
	default:printf("%c is consonants",alpha);
	break;
	}
	
}