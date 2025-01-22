// Find the total negative element in an array
#include<stdio.h>
int main(){
    int a[100],i,n,count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Entere the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
            count++;
        }
    }
    printf("Netagive elements of array are: %d",count);
}