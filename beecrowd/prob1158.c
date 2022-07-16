//sum of all conclusive odd number

#include <stdio.h>

int main() {
    int testCase, countTest;

    countTest = 0;

    scanf("%d", &testCase);

    while (countTest < testCase) {
        int start, range, sum, countNum;
        
        sum = 0;
        countNum = 0;

        scanf("%d %d", &start, &range);

        while(countNum < range) {
            if(start % 2 != 0) {
                sum += start;
                countNum++;
            }
            start++;
        }

        printf("%d\n", sum);

        countTest++;
    }

    return 0;
}