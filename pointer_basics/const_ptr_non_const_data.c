#include<stdio.h>
void main()
{
	// constant pointer pointing to non-constant data	

	int a=10;
	int *const ptr=&a;
	
	*ptr=100; // valid
	
	int c;
	ptr=&c;  //not valid
	
}
