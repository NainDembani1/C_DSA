// to count total number of notes in an amount
#include<stdio.h>
int main(){
    int note500,note100,note50,note20,note10,note5,amount;
    note500=note100=note50=note20=note10=note5=0;
    printf("Enter amount: ");
    scanf("%d",&amount);
    if(amount>=500){
        note500=amount/500;
        amount=note500*500;
    }
    if(amount>=100){
        note100=amount/100;
        amount=note100*100;
    }
    if(amount>=50){
        note50=amount/50;
        amount=note50*50;
    }
    if(amount>=20){
        note20=amount/20;
        amount=note20*20;
    }
    if(amount>=10){
        note10=amount/10;
        amount=note10*10;
    }
    if(amount>=5){
        note5=amount/5;
        amount=note5*5;
        }

    printf("Total number of notes= \n");
    printf("500=%d\n",note500);
    printf("100=%d\n",note100);
    printf("50=%d\n",note50);
    printf("20=%d\n",note20);
    printf("10=%d\n",note10);   
    printf("5=%d\n",note5);

}