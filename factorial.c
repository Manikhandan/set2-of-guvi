#include<stdio.h>
int main()
{
int h,j,facto=1;
printf("enter number that u want to know the factorial");
scanf("%d",&h);
for(j=1;j<=h;j++)
{
facto=facto*j;
}
printf("factorial=%d",facto);
}
