#include <stdio.h>
int main()
{
	int price1,price2,change;
	printf("实收金额(元):");
	scanf("%d",&price1);
	printf("应收金额(元):");
	scanf("%d",&price2);
	change = price1 - price2;
	printf("找您%d元.",change);
	return 0;
 } 
