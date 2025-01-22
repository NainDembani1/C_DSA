// Check string is palindrome or not
#include<stdio.h>
int main(){
    char a[20];
    int i,len,count=0;
    printf("Enter an string: ");
    scanf("%s",&a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i] != a[len - i - 1 ]){
            count =1;
            break;
        }
    }
    if(count)
    printf("%s is not palindrome",a);
    else
    printf("%s is palindrome",a);
    
}