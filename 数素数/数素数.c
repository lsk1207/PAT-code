#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int isprime(int x)
{
	int i;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			break;
	}
	if (i>sqrt(x))
		return 1;
	else
		return 0;
}
int main()
{
	int i, k = 0, j;
	int count;
	int m, n;
	int a[10001];
	scanf("%d %d", &m, &n);
	int m1 = m;
	if (m > n)
	{
		return 0;
	}
	for (i = 2; k < n; i++)
	{
		if (isprime(i))
			a[++k] = i;
	}
	k = 0;
	for (i = m; i <= n; i++)
	{
		printf("%d", a[i]);
		k++;
		if (k % 10 == 0 || i == n)
			printf("\n");
		else
			printf(" ");
	}

	return 0;
}