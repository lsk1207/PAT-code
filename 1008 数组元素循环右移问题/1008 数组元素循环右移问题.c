#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, n, m,temp,j,flag=1;
	int a[101];
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < m; i++)		//先往后移一位，再往后移一位，总共移动m次
	{
		for (j = n-1; j>0; j--)
		{
			if (flag)
			{
				temp = a[0];
				a[0] = a[n - 1];
				flag = 0;
			}
			if (j != 1)
				a[j] = a[j - 1];
			else if(j==1)
				a[j] = temp;
		}
		flag = 1;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d ", a[i]);
		else
			printf("%d", a[i]);
	}

	return 0;
}