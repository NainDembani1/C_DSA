// This will calcluate the simple interest  
#include<stdio.h>
int main(){
    int P,R,T,SI;
    printf("Enter Principle, Rate and Time to calculate the simple interest: ");
    scanf("%d%d%d", &P,&R,&T);
    SI=(P*R*T)/100;
    printf("Simple Interest: %d",SI);

}