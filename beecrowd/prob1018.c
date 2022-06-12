//Banknotes

#include <stdio.h>

int main() {
    //variable declaration
    int input_amount, note100, note50, note20, note10, note5, note2, note1;

    //taking input
    scanf("%d", &input_amount);

    printf("%d\n", input_amount);
    if(input_amount > 0 && input_amount < 1000000) {
        //processing data
        note100 = input_amount / 100;
        input_amount %= 100;
        note50 = input_amount / 50;
        input_amount %= 50;
        note20 = input_amount / 20;
        input_amount %= 20;
        note10 = input_amount / 10;
        input_amount %= 10;
        note5 = input_amount / 5;
        input_amount %= 5;
        note2 = input_amount / 2;
        input_amount %= 2;
        note1 = input_amount;

        //Showing output
        printf("%d nota(s) de R$ 100,00\n", note100);
        printf("%d nota(s) de R$ 50,00\n", note50);
        printf("%d nota(s) de R$ 20,00\n", note20);
        printf("%d nota(s) de R$ 10,00\n", note10);
        printf("%d nota(s) de R$ 5,00\n", note5);
        printf("%d nota(s) de R$ 2,00\n", note2);
        printf("%d nota(s) de R$ 1,00\n", note1);
    }

    return 0;
}