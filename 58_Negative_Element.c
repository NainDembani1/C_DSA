// Print all negative element of an array
#include<stdio.h>
int main(){
    int a[10],i,n;
    printf("Enter the size of array: ");
    scanf("%D",&n);
    printf("Enter the elements of an array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("Negative elements of array: ");
    for(i=0;i<n;i++){
        if(a[i]<0){
            printf("%d ",a[i]);
        }
    }
}