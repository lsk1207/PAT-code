#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n,i,k=0;
	char a[200000];
	int s = 0, p = 0, f = 0;
	int s1 = 0, s2 = 0, s3 = 0, f1 = 0, f2 = 0, f3 = 0;
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		scanf("%c %c", &a[k], &a[k + 1]);
		getchar();
		if (a[k] == 'C' && a[k + 1] == 'J')
			s1++;
		else if (a[k] == 'J' && a[k + 1] == 'B')
			s2++;
		else if (a[k] == 'B' && a[k + 1] == 'C')
			s3++;
		else if (a[k] == 'C' && a[k + 1] == 'C' || a[k] == 'J' && a[k + 1] == 'J' || a[k] == 'B' && a[k + 1] == 'B')
			p++;
		else if (a[k] == 'J' && a[k + 1] == 'C')
			f1++;
		else if (a[k] == 'B' && a[k + 1] == 'J')
			f2++;
		else if (a[k] == 'C' && a[k + 1] == 'B')
			f3++;
		k += 2;
	}
	s = s1 + s2 + s3;
	f = f1 + f2 + f3;
	printf("%d %d %d\n", s, p, f);
	printf("%d %d %d\n", f, p, s);
	if (s1 > s2 && s1 > s3)
		printf("C ");
	else if (s2 > s1 && s2 > s3)
		printf("J ");
	else if (s3 > s1 && s3 > s2)
		printf("B ");
	else if (s1 == s2 && s1 > s3)
		printf("C ");
	else if (s1 == s3 && s1 > s2)
		printf("B ");
	else if (s2 == s3 && s2 > s1)
		printf("B ");
	else if (s2 == s3 && s1 == s2)
		printf("B ");
	if (f1 > f2 && f1 > f3)
		printf("C");
	else if (f2 > f1 && f2 > f3)
		printf("J");
	else if (f3 > f1 && f3 > f2)
		printf("B");
	else if (f1 == f2 && f1 > f3)
		printf("C");
	else if (f1 == f3 && f1 > f2)
		printf("B");
	else if (f2 == f3 && f2 > f1)
		printf("B");
	else if (f2 == f3 && f1 == f2)
		printf("B");
	return 0;
}