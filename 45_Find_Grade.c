// find grade of given marks 
#include<stdio.h>
int main(){
    int n;
    printf("Enter marks: ");
    scanf("%d",&n);
    switch(n/10){
        case 10:
        case 9: 
            printf("A+");
            break;
        
        case 8: 
            printf("A");
            break;
              
        case 7: 
            printf("B+");
            break;
        
        case 6: 
            printf("B");
            break;
        
        case 5: 
            printf("C");
            break;

        case 4:
        printf("D");    
        break;
        
        default:
        printf("Fail");
        break;
    }
}