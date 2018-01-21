#include <stdio.h>
int main()
{
    int b, d, i, g;
    printf("enter two numbers" );
    scanf("%d %d",&b,&d);
    while (b<d)
    {
        g=0;
        for(i=2;i<=b/2;++i)
        {
            if(b%i == 0)
            {
                g= 1;
            }
        }
        if (g==0)
            printf("%d\n",b);
        ++b;
    }
}
