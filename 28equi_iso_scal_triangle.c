// to check an triangle is equilateral isoceles or scalene
#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3)
    printf("The triangle is equilateral");
    else if(s1==s2 || s2==s3)
    printf("The triangle is isoceles");
    else
    printf("The triangle is scalene");

}