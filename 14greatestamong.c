// To find the greatest amont the given three numbers
#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf("%d is Greatest",a);
    else
        printf("%d is Greatest",c);
    }
     else{
     if(b>c)
        printf("%d is Greatest",b);
      
     else
        printf("%d is Greatest",c);
     }
    
}