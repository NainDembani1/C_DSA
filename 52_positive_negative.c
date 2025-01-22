// Check positive or negative using switch case

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n>0){
        case 0:
        printf("%d is an negative number",n);
        break;
        case 1:
        printf("%d is an positive number",n);
        break;
    }
}