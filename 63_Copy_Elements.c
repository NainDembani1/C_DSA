//Copy a;; element from an array to anothe array

#include<stdio.h>
int main(){
    int a[100],b[100],i,j,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    printf("First element: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nSecond element: ");
for(j=i;j<i;j++){
    printf("%d",b[j]);
}
}