// Insert an element in specific position of an array
#include<stdio.h>
int main(){
    int a[100];
    int i,n,pos,x;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i] );
    }
    printf("\nEnter element to be insterted: ");
    scanf("%d",&x);
    printf("Enter the position where element to be inserted: ");
    scanf("%d",&pos);
    n=n+1;
    for(i=n-1;i>=pos;i--){
        a[i]=a[i-1];
        a[pos-1]=x;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}