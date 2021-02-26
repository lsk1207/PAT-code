#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct paiming
{
	char name[11];
	char xuehao[11];
	int grade;
};
int main()
{
	int n,i,j1=0,j2=0,max,min;
	scanf("%d", &n);
	struct paiming p[100];
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d", &p[i].name, &p[i].xuehao, &p[i].grade);
	}
	min = max = p[0].grade;
	for (i = 0; i < n; i++)
	{
		if (p[i].grade > max)
		{
			max = p[i].grade;
			j1 = i;
		}
		if (p[i].grade < min)
		{
			min = p[i].grade;
			j2 = i;
		}
	}
	printf("%s %s\n", p[j1].name, p[j1].xuehao);
	printf("%s %s", p[j2].name, p[j2].xuehao);
	return 0;
}