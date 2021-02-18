#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  if(b>0) printf("%d/%d=%.2f",a,b,a*1.0/b);
  else if(b<0) printf("%d/(%d)=%.2f",a,b,a*1.0/b);
  else printf("%d/0=Error",a);
  return 0;
}

