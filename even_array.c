#include <stdio.h>
void main()
{
	int n, i, even = 0;

	printf("enter the size of the array=");
	scanf("%d", &n);

	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			even++;
		}
	}
	printf("even =%d\n", even);
}
