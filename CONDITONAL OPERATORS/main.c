#include<stdio.h>
#include<stdlib.h>

 void main(){
    int icecream_price = 950;
    int pocket_money= 1000;

    printf("Do I have money to buy ice cream? %d \n",icecream_price < pocket_money);
    printf("Do I have money to buy two ice creams? %d",2*icecream_price < pocket_money);

    return 0;


 }

