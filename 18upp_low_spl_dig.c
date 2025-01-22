// to check character is upper lower special char or digit
#include<stdio.h>
int main (){
    char ch;
    printf("Enter any character: ");
   scanf("%c",&ch);
   if(ch>='a' && ch<='z'){
    printf("%c is in lowercase",ch);
   }
   else if(ch>='A' && ch<='Z'){
    printf("%c is in upperercase",ch);
   }
   else if(ch>=41 && ch<=77){
    printf("%c is an special character",ch);}
    else{
    printf("It is an digit");
    }
}
