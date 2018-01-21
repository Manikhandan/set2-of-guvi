#include <stdio.h>
int main()
{
  int z,x,e,d,n,c,g;
  printf("enter the two interval numbers");
  scanf("%d %d",&z,&x);
  for(e=z+1;e<x;++e)
  {
      d=e;
      n=0;
      while(d!=0)
      {
          g=(d%10);
          c=g*g*g;
          n=n+c;
          d/=10;
      }
      if(e==n)
      {
          printf("%d there is an armstrong number ",e);
}

}}
 

