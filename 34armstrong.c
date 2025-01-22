// Number is Armstrong or not

#include<stdio.h>
int main (){
    int n,m,sm=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n;
    while(m>0){
        r=m%10;
        sm=sm+(r*r*r);
        m=m/10;     
    }
    if(sm==n){
        printf("%d is an armstrong number",n);
    }
    else
        printf("%d is not an armstrong number",n);



}