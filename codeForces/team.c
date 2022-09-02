#include <stdio.h>

int main() {
    int row;

    scanf("%d", &row);

    if(row >= 1 && row <= 1000) {
        int i, j, count;
        int ara[row][3];

        count = 0;

        for(i = 0; i < row; i++) {
            for(j = 0; j < 3; j++) {
                scanf("%d", &ara[i][j]);
            }
        }

        for(i = 0; i < row; i++) {
            if(ara[i][0] == 1 && ara[i][1] == 1 || ara[i][0] == 1 && ara[i][2] == 1|| ara[i][1] && ara[i][2] == 1) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}