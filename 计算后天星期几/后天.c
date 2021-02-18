#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a); 
	if (a+2>7)
	{
		b = a + 2;
		c = b%7;
		printf("%d",c);
	}
	else
	{
		b = a + 2;
		printf("%d",b);
	}
	return 0;
 } 
