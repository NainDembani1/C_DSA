// Temperature conversion celsius to fahrenhit and vice versa
#include<stdio.h>
int main(){
    int a,b,celsius,fahrenhit,n;
    printf("Enter-1 to Convert Celsius to Fahrenhit:");
    printf("\nEnter-2 to Convert Fahrenhit to Celsius:");
    printf("\nEnter:");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Enter the temperature: ");
        scanf("%d",&a);
        fahrenhit=(((9*a)/5)+32);
        printf("\nTemperature in fahrenhit %d",fahrenhit);
        break;

        case 2:
        printf("Enter the temperature: ");
        scanf("%d",&b);
        celsius= 5*(b-32) / 9;
        printf("\nTemperature in Celsius %d",celsius);
        break;

        default:
        printf("Error!");
    }
}