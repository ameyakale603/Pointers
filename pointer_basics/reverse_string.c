#include<stdio.h>
int rev_string(char *str);  //prototype
void main()
{
	rev_string("Bye");
}

int rev_string(char *str)
{
	if(*str)
	{
		rev_string(str+1);       //'B' goes to the stack first,then 'y' and 'e'
		printf("%c\t",*str);	//stack unwinds and prints in reverse way.
	}
}
