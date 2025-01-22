//to check leap year or not
#include<stdio.h>
int main(){
    int yr;
    printf("Enter a year: ");
    scanf("%d",&yr);
    if(yr%4==0 || yr%400==0 && yr%100!=0){
        printf("It is an leap year");
    }
    else
    printf("It is not an leap year");
}