//Reverse a given number 
#include <stdio.h>
int main(){
    int n,reverse=0,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    printf("Reversed number is: %d",reverse);


}