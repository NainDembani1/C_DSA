// Find the generic root of the number
#include<stdio.h>
int main(){
    int n,r,m,sum=0;
    printf("Enter anumber:");
    scanf("%d",&n);                // n=123454
    m=n;                           // m=n=12345
    while(m>0){          
        r=m%10;                    // r=12345%10 ----> 1234.5  ---> r=5,4,3,2,1
        sum=sum+r;                 // sum= 0+r ---->   sum= 0+5+4+3+2+1
        m=m/10;                    // m=12345 ---> m=1234 ---> m=123.....
        if (m==0){
            if(sum>9){             // sum=15>9  
                m=sum;             // m=15  process will be repeat
                sum=0;
            }
        }
    }
    printf("Generic root of %d is %d",n,sum);
}