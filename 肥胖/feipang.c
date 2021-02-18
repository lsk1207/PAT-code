#include <stdio.h>
int main()
{
    double tz,sg,a;
    scanf ("%lf %lf",&tz,&sg);
    a = tz/(sg*sg);
    printf("%.1f\n",a);
	if(a>25)
        printf("PANG");
    else
        printf("Hai Xing");
    return 0;
}

