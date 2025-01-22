// Convert all string int *
#include<stdio.h>
int main(){
    char str[20];
    int len,i;
    printf("Enter an string: ");
    scanf("%s",&str);
    len=strlen(str);
    printf("Input string converted into asterisk(*)\n");
    for(i=-0;i<len;i++){
        printf("*");
    }
}