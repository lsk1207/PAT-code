#define _CRT_SECURE_NO_WARNINGS 1
/*关于printf("%s",&a[i]);应用的解释：
%s是输出指向字符指针对应的字符串,以‘\0’作为结束符.
&a[i]的意思是取str字符数组的第i个元素的地址,
整句话的意思是以a字符数组的第i个元素为起始元素开始打印字符串,直到遇到\0.
（所以a[i]='\0'的不能遗漏，否则可能会因为没有结束的'\0'而多输出一些乱码或是字符串。）
2、关于gets()函数是向字符数组输入一个字符串，当遇到回车符时结束输入，系统会自动在所有有效字符后加上结束符‘\0’,
所以实际长度+1。*/
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[81];
	gets(a);
	for (i = strlen(a) - 1; i >= 0; i--)
	{
		if (a[i] == ' ')
		{
			printf("%s", &a[i + 1]);			//从a[i+1]开始打印遇到'\0'停止
			printf("%c", a[i]);
			a[i] = '\0';
		}
		if (i == 0)
		{
			printf("%s", &a[i]);
		}
	}

	return 0;
}