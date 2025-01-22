// Sum of all elements of array using Recursion
#include<stdio.h>

int sumArray(int arr[], int n){
    if(n<0){
        return 0;
    }
    else{
        return arr[n] + sumArray(arr,n-1);
    }
}
int main(){
 int a[100],n,sum;
 printf("Enter size of array: ");
 scanf("%d",&n);
 printf("Enter elements of array:  ");
 for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
 }
sum= sumArray(a,n-1);
printf("Sum of Elements of array is: %d",sum);

}