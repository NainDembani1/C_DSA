// To find Area and Circumference
#include<stdio.h>

 int main() {

int radius, area, circum;
const PI=3.14;
printf("Enter Radius: ");
scanf("%d", &radius);
area = PI*(radius*radius);
printf("Area = %d\n", area);
circum = 2*PI*radius;
printf("Circumference = %d", circum);


 }
