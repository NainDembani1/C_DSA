#include<stdio.h>
int main(){
    int a[100],i,j,n,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
if(a[i]==a[j]){
    for ( k=j; k<n-1; k++)
    {
     a[k]=a[k+1];
    }
    n--;
    j--;
}
    }
    for(i=0;i<n;i++){
        printf("%d ", a[i] );
    }
}