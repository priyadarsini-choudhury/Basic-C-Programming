#include<stdio.h>
void main()
{
	int i,j,n,sp;
	
	
	printf("enter a number=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
//spaces
for(sp=1;sp<=n-i;sp++)
{
	printf(" ");
}//print alphabets
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",'A'+j-1);
		}
		printf("\n");
		
			}
}