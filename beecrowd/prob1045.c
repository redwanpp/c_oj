//Types of triangle

#include <stdio.h>
#include <math.h>

int main() {
    double num[3];
    int i, j, temp;

    //taking three double number as input
    for(i = 0; i < 3; i++){
        scanf("%lf", &num[i]);
    }
    
    if(num[0] < 0 || num[1] < 0 || num[2] < 0) {
        return 0;
    }
    //short them in decreasing order
    for(i = 0; i < 3 - 1;i++) {
        for(j = 0; j < 3 - i - 1; j++) {
            if(num[j] < num[j + 1]){
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    //cheaking conditions and printing statements
    if(num[0] >= (num[1] + num[2])) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(pow(num[0], 2) == pow(num[1], 2) + pow(num[2], 2)) {
        printf("TRIANGULO RETANGULO\n");
        return 0;
    }
    if(pow(num[0], 2) > pow(num[1], 2) + pow(num[2], 2)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(pow(num[0], 2) < pow(num[1], 2) + pow(num[2], 2)) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if((num[0] == num[1]) && (num[1] == num[2]) && (num[2] == num[0])){
        printf("TRIANGULO EQUILATERO\n");
        return 0;
    }
    if((num[0] == num[1]) || (num[1] == num[2]) || (num[3] == num[0])) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}