// sum of natural numbers
#include<stdio.h>
int main(){
    int n,i,sm;
    printf("Enter num till you want to sum: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sm+=i;}
    printf("Sum of natural numbers is: %d",sm);
}