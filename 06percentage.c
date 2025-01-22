// Percentage of subjects of a stdent
#include<stdio.h>
int main(){
    int  maths, eng, phy, chem, cs;
    float total, percentage;
    printf("Enter Marks of every subject out of 100: ");
    scanf("%d%d%d%d%d",&maths,&eng,&phy,&chem,&cs);
    total = maths+eng+phy+chem+cs;
    percentage = (total/500)* 100;
    printf("Total Percentage =  %f",percentage);
}