#include<stdio.h>

void main()
{
		
	//Non constant pointer pointing to constant data

	const int b=10;
	const int *ptr=&b;		//pointer pointing to data is constant
	*ptr=1000;                    //its not valid 
	
	int c=100;
	ptr=&c;
	ptr++;
	
}
