#include <stdio.h>
int main()
{
	int i, wan,qian, bai, shi, ge;
	i = 42039;
	wan = i/10000%10;
	qian = i/1000%10;
	bai = i/100%10;		
	shi = i/10%10;
	ge = i%10;
	printf("%d\n%d\n%d\n%d\n%d\n",wan,qian,bai,shi,ge);
} 

