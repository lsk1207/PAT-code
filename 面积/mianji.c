#include <stdio.h>
int main()
{
  double a,b,s;
  scanf("%lf%lf",&a,&b);
  s=a/(b*b);
  printf("%.1f \n",s);
  if(s>25)
  printf("PANG");
  else
   printf("Hai Xing");
   return 0;
}

