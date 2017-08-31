#include<stdio.h>

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void main()
{
	int a=10,b=20;
	swap(&a,&b);                 //if reference is not passed "Function only swaps copies of a and b"
	printf("%d\t%d\t",a,b);
	
}
