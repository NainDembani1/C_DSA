// to check if a number is pos neg or zero
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0)
    printf("%d is a positive number",n);
    else if(n<0)
    printf("%d is an negtaive number",n);
    else
    printf("It is zero");

}