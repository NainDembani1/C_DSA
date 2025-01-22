//Read the integer and find the power of it using 'pow' function 
#include<stdio.h>
#include<math.h>
int main(){
  int base,exp,result;
  printf("Enter a base number: ");
  scanf("%d",&base);
  printf("Enter an exponaent: ");
  scanf("%d",&exp);
  result= pow(base,exp);
  printf("%d^%d=%d",base,exp,result);
}