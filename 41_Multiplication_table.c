// To print multiplication table
#include<stdio.h>
int main (){
    int n,i,table;
    printf("Enter number to print the table: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    printf("%d * %d = %d \n",n,i,n*i);
    }

}