// input the week number and print the weekday
#include<stdio.h>
int main(){
    int n;
    printf("Enter the week num from 1 to 7: ");
    scanf("%d",&n);
    if(n==1){
        printf("Monday");
    }
    if(n==2){
        printf("Tuesday");
    }
    if(n==3){
        printf("Wednesday");
    }
    if(n==4){
        printf("Thursday");
    }
    if(n==5){
        printf("Friday");
    }
    if(n==6){
        printf("Saturday");
    }
    if(n==7){
        printf("Sunday");
    }
    
}