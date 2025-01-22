// To print a calendar taking input from user
#include<stdio.h>
int main(){
    int totaldays,i,first;
    printf("Enter number of days in a month:");
    scanf("%d",&totaldays);
    printf("Enter first day in a month:");
    scanf("%d",&first);
    for(i=1;i<first;i++)
    printf(" ");
    for(i=1;i<=totaldays;i++){
        printf("%d ",i);
        if((first+i-1)%7==0)
        printf(" \n");
    }

}