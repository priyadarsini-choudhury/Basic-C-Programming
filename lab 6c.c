#include<stdio.h>
void main()
{
	int i,arr[10],key;
	printf("enter the elements=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);// inserting values in array
	}
	printf("enter a key=");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(arr[i]==key)
		{
			printf("the search element =%d",i );
		}
	}
}