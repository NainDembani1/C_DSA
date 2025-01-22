// To find a factorial of an number 
#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of -ve num is not possible");
    }
    else{
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    }
    }