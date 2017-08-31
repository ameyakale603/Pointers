#include<stdio.h>
int str_occ(char *str,char ch);
void main()
{
	str_occ("onlyakk",'k');
}

int str_occ(char *str,char ch)
{
	int count=0;
	while(*str)
	{
		if(*str==ch)
		{
			count++;		
		}
		str++;	
	
	}
	printf("%d\t",count);
}
