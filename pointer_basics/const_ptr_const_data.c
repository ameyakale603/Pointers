#include<stdio.h>

void main()
{
	// constant pointer pointing to constant data		
	
	const int b=10;                   
	const int * const ptr=&b;         

	int c;
	ptr=&c;	            //nothing can be changed
	*ptr=100;           //nothing can be changed
	
	
}
