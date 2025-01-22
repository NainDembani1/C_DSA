// A no. is divisible by 5 and 11
#include<stdio.h>
int main (){
    int n;
    printf("Enter any number: ");
    scanf("%d0",&n);
    if(n%5==0 && n%11==0 ){
        printf("It is divisible by both 5 and 11");
    }
    else if(n%5==0 && n%11!=0){
        printf("It is divisible by 5");
    }
    else if(n%5!=0 && n%11==0){
        printf("It is divisible by 11");
    }
    else
    printf("It is not divisible by both 5 and 11");
}