// find the Area, ciecumference and volume using switch case
#include<stdio.h>
int main(){
    float r,h,area,circum,vol;
    int n;
    const float PI=3.14;
    printf("Press-1 to find the Area of circle");
    printf("\nPress-2 to find the Circumference of circle");
    printf("\nPress-3 to find the Volume of cylinder");
    printf("\nEnter: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Enter radius: ");
        scanf("%f",&r);
        area=PI*r*r;
        printf("Area of Circle is %f",area);
        break;

        case 2:
        printf("Enter radius: ");
        scanf("%f",&r);
        circum=2*PI*r;
        printf("Circumference of Circle is %f",circum);
        break;

        case 3:
        printf("Enter radius and height: ");
        scanf("%f%f",&r,&h);
        vol=PI*h*r*r;
        printf("Volume of Cylinder is %f",vol);
        break;

        default:
        printf("Error!");
        break;
    }

}