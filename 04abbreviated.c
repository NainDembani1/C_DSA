// It converts a person name into an abbreviated 
//    for Ex- Raj Kumar Rao => R K Rao  

#include<stdio.h>
int main(){

    char fname[10], mname[10], lname[10];
    printf("Enter Name:  ");
    scanf("%s%s%s", fname, mname,lname );
    printf("Abbreviated name: ");
    printf("%c %c %s", fname[0],mname[0],lname); 
}