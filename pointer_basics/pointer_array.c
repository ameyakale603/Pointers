#include<stdio.h>

void main()
{
	int a[3]={1,2,3};
	int *b=&a[0];
	int *c=0;          //pointer is only exchangable with ZERO
	
	*(a+2)=20;	   // *(a+i)=a[i]
	
	printf("%d\t",a[2]);

}
