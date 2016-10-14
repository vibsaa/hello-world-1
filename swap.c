#include <stdio.h>
int main()
{
	int x,y,temp;
	printf("enter first number\n");
	scanf("%d",&x);
	printf("\nenter second number\n");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("\nswapped numbers are %d and %d\n",x,y);
	return 0;
}