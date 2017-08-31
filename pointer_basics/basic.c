#include<stdio.h>

void main()
{
	int x=1,y=2;
	int *ip;
	ip=&x;
	int a[10];
printf("%p\t%d\t%d\t%d",ip,x,*ip,*ip++); // address,1,2,1
//printf("\n%d\t",*ip++);
//printf("\n%d",a[4]);

}
