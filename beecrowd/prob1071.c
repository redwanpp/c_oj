//Sum of consecutive odd numbers 1

#include <stdio.h>

int main() {
    int num1, num2, i, sum;
    sum = 0;

    scanf("%d %d", &num1, &num2);

    //cheaking value and calculte sum
    if (num1 > num2) {
        for(i = (num2+1); i < num1; i++) {
            if(i % 2 != 0) {
                sum += i;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}