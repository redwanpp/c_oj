//Banknotes and coin

#include <stdio.h>

int main() {
    //variable declaration
    double inpt_amount;
    int for_note, for_coin, note100, note50, note20, note10, note5, note2, coin100, coin50, coin25, coin10, coin5, coin1;

    //taking input form user
    scanf("%lf", &inpt_amount);

    //cheaking data is in rang or not?
    if(inpt_amount > 0 && inpt_amount < 1000000.00) {
        //preprocessing data
        for_note = (int)inpt_amount;
        for_coin = (inpt_amount - for_note) * 100;    
        
        //data processing start
        //notes
        note100 = for_note / 100;
        for_note %= 100;
        note50 = for_note / 50;
        for_note %= 50;
        note20 = for_note / 20;
        for_note %= 20;
        note10 = for_note / 10;
        for_note %= 10;
        note5 = for_note / 5;
        for_note %= 5;
        note2 = for_note / 2;
        for_note %= 2;
        //coins
        coin100 = for_note;
        for_coin %= 100;
        coin50 = for_coin / 50;
        for_coin %= 50;
        coin25 = for_coin / 25;
        for_coin %= 25;
        coin10 = for_coin / 10;
        for_coin %= 10;
        coin5 = for_coin / 5;
        for_coin %= 5;
        coin1 = for_coin;
        //data processing end
    }
        
    //showing outputs:
    //notes
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", note100);
    printf("%d nota(s) de R$ 50.00\n", note50);
    printf("%d nota(s) de R$ 20.00\n", note20);
    printf("%d nota(s) de R$ 10.00\n", note10);
    printf("%d nota(s) de R$ 5.00\n", note5);
    printf("%d nota(s) de R$ 2.00\n", note2);
    //coins
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin100);
    printf("%d moeda(s) de R$ 0.50\n", coin50);
    printf("%d moeda(s) de R$ 0.25\n", coin25);
    printf("%d moeda(s) de R$ 0.10\n", coin10);
    printf("%d moeda(s) de R$ 0.05\n", coin5);
    printf("%d moeda(s) de R$ 0.01\n", coin1);

    return 0;
}