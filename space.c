#include <stdio.h>

void main()
{
	int j,c,d;
	printf("enter the number:\n");
	scanf("%d%d",&c,&d);
	for(j=c;j<=d;j++)
	{
		if(j%2==1)
		{
			printf("%d\n",j);
		}
	}
	
}

