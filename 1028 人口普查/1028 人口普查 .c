#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
struct People
{
	char name[6];
	char time[11];
};
int main()
{
	struct People people;
	int count = 0;
	char minTime[11] = "1814/09/06";
	char maxTime[11] = "2014/09/06";
	int n, i;
	struct People minPeople;		//最大的人
	struct People maxPeople;		//最小的人
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", &people.name, &people.time);
		if (strcmp(people.time, minTime) >= 0 && strcmp(maxTime, people.time) >= 0)
		{
			if (count == 0)
			{
				minPeople = maxPeople = people;
			}
			count++;
			if (strcmp(people.time, maxPeople.time) <= 0)		//2020年出生的比2021年的大！！！
			{
				maxPeople = people;
			}
			else if (strcmp(people.time, minPeople.time) >= 0)
			{
				minPeople = people;
			}
		}
	}
	if (count > 0)
	{
		printf("%d %s %s", count, &maxPeople.name, &minPeople.name);
	}
	else
		printf("%d", count);
	return 0;
}