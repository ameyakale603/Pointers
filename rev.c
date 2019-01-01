#include<stdio.h>
#include<string.h>

void rev_str(char *str){
    if(*str){
        rev_str(str+1);
        printf("%c",*str);
    }
}

void without_rec(char *str){
    int len=strlen(str);
    int j=0;
    int i;
    char rev_str[100];
    for(i=len-1;i>=0;i--){
        rev_str[j++]=str[i];
    }
    rev_str[i]='\0';
    printf("\n%s",rev_str);
}

int main(){

    rev_str("ameya kale");
    without_rec("onylak");
    return 0;
}
