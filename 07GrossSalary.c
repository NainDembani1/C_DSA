// To calculate the gross salay of an employe
#include<stdio.h>
int main(){
    int gs,bs,hra,da;
    printf("Enter Basic Salary:");
    scanf("%d",&bs);
    printf("Enter HRA Salary:");
    scanf("%d",&hra);
    printf("Enter DA Salary:");
    scanf("%d",&da);
    gs= bs+hra+da;
    printf("Gross Salary: %d",gs);

}