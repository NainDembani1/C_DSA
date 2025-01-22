//Count the number of digits
#include<stdio.h>
int main(){
    int n,r;
    int count=0;
    printf("Enter a numbner: ");
    scanf("%d",&n);
    while(n!=0){  
            n=n/10;
        count++;
    }
    printf("%d",count);
}