#include<stdio.h>
void main()
{
float n, i, reg = 0;
printf("Enter a number");
scanf("%f",&n);
for(i=2; i<=n/2; ++i)
{
if(n==0)
{
reg=1;
break;
}
}
if (reg==0)
printf("not prime number",n);
else
printf("prime number",n);
}
