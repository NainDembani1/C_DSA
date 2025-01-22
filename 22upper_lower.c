// to check uppercse or lowercase
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    printf("%c is in lowercase",ch);
    else
    printf("%c is in Uppercase",ch);

}