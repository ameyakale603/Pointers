#include<stdio.h>
int str_cmp(char *str1,char *str2);
void main()
{
  str_cmp("ak","ak");
}

int str_cmp(char *str1,char *str2)
{
	while(*str1 && *str2 && *str1++ == *str2++)
	{
		if(*str1=='\0' && *str2=='\0')
		{
			printf("Strings matched");
		}		
		

	}
	
	
}
