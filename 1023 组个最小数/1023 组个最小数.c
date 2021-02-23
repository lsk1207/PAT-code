#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a[10], b[51], c[10] = {0};
	int i,sum=0,j,k=0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] != 0)
			c[i] = 1;
		sum += a[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (c[i])
		{
			for (j = 0; j < a[i]; j++)
			{
				b[k] = i;
				k++;
			}
		}
	}
	if (!c[0])
	{
		for (i = 0; i < k; i++)
		{
			printf("%d", b[i]);
		}
	}
	else
	{
		for (i = 1; i < 10; i++)
		{
			if (c[i])
			{
				b[0] = i;
				b[a[0]] = 0;
				break;
			}
		}
		for (i = 0; i < k; i++)
		{
			printf("%d", b[i]);
		}
	}
	return 0;
}