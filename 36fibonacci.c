// Fibonacci series
#include<stdio.h>
int main(){
    int i,a,b,c;
    a=0;
    b=1;
    printf("\n%d\n%d",a,b);
    for(i=0;i<10;i++){
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    }