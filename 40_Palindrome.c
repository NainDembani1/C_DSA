// Check whether a number is palindrome or not
#include <stdio.h>
int main (){
    int n,rem,og,rev=0;
   printf("Enter an number:");
   scanf("%d",&n);
   og=n;
   while ((n!=0))
   {
    rem=n%10;
    rev= rev*10+rem;
    n=n/10;
   }
   if(og==rev)
   printf("%d is a palindrome",og);
   else
   printf("%d is not a palindrome",og);
   
}