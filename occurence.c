#include<stdio.h>

int main(){

    char a[100];
    int i,count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        count=1;
        while(a[i]==a[i+1]){
            i++;
            count++;
        }
        printf("%c\n",a[i]);
        printf("%d",count);
    }
    return 0;
}
