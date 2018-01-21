#include <stdio.h>
int main() 
{
	int h,y,o;
	printf(" enter the number that u want to know the intervals of two even numbers");
	scanf("%d%d",&h,&y);
	for(o=h;o<=y;o++)
	{
		if(o%2==0)
		printf("%d\t",o);
	}
}
