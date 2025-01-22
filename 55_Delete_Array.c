// Delete an element in specific position of an array
#include<stdio.h>
int main(){
    int a[20],n,i,x,pos;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
                printf("%d ",a[i]);
    }
    printf("\nEnter position where to delete: ");
    scanf("%d",&pos);
    i=0;
    while(i != pos-1)
    i++;
    while(i<n){
        a[i]=a[i+1];
        i++;
    }
    n--;
    printf("The new array is- ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}