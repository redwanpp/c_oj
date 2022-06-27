#include <stdio.h>

int main() {
    int num1, num2, i;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 < num2) {
        for(i = num1; i < num2; i++) {
            if(i % 5 == 2) {
                if(i <= num2) {
                    printf("%d\n", i);
                }
            }
            else if(i % 5 == 3) {
                if(i <= num2) {
                    printf("%d\n", i);
                }
            }
        }
    }
    else {
        for(i = num2; i < num1; i++) {
            if(i % 5 == 2) {
                if(i < num1) {
                    printf("%d\n", i);
                }
            }
            else if(i % 5 == 3) {
                if(i < num1) {
                    printf("%d\n", i);
                }
            }
        }
    }

    return 0;
}