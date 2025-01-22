// Input the angkes and check the triangle is valid or not 
#include<stdio.h>
int main (){
    int ang1, ang2,ang3,sum;
    printf("Enter angles of triangle: ");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    sum=ang1+ang2+ang3;
    if(sum==180)
    printf("The traingle is valid");
    else
    printf("Triangle is invalid");
}