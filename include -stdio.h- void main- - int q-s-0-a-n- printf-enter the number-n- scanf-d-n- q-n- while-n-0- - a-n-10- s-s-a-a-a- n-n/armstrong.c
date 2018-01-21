#include <stdio.h>
void main()
{
int q,s=0,a,n;
printf("enter the number\n");
scanf("%d",&n);
q=n;
while(n!=0)
{
a=n%10;
s=s+(a*a*a);
n=n/10;
}
if(s==q)
{
printf("armstrong number");
}
else
{
printf("not an armstrong number");
}
}

