//height and position

#include <stdio.h>

int main() {
    int i, pos, max;
    int numbers[100];

    for(i = 0; i < 100; i++) {
        scanf("%d", &numbers[i]);
    }

    max = 0;
    pos = 0;

    for(i = 0; i < 100; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
            pos = i+1;
        }
    }

    printf("%d\n%d\n", max, pos);

    return 0;
}