////Sequence of number and sum;

#include <stdio.h>

int main() {
    int i, sum, num1, num2;

    while(1) {
        scanf("%d", &num1);
        scanf("%d", &num2);

        if(num1 <= 0 || num2 <= 0) {
            return 0;
        }

        sum = 0;

        if(num1 < num2) {
            for(i = num1; i <= num2; i++) {
                printf("%d ", i);
                sum += i;
            }
        }
        else {
            for(i = num2; i <= num1; i++) {
                printf("%d ", i);
                sum += i;
            }
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}