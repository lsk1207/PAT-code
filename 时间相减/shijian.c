#include <stdio.h>
int main()
{
	int hour1,minute1,hour2,minute2,t1,t2,t;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	t1 = hour1*60 + minute1;
	t2 = hour2*60 + minute2;
	t = t1 - t2;
	printf("时间差为%d小时%d分钟",t/60,t%60);
} 
