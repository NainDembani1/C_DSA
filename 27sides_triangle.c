// Enter sides of an triangle and check it is valid or not
#include <stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if((s1+s2)>s3){
        if((s2+s3)>s1){
            if((s1+s3)>s2)
        printf("Triangle is valid");
        }
}
else
printf("Triangle is invalid");

}