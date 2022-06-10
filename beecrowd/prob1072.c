//interval 2

#include <stdio.h>

int main() {
    int n, i, in, out;
    int ara[n];

    scanf("%d", &n);
    
    i = 0;
    while (i < n) {
        scanf("%d", &ara[i]);
        i++;
    }
    
    i = 0;
    in = 0;
    out = 0;

    while(i < n) {
        if(ara[i] >= 10 && ara[i] <= 20) {
            in++;
        }
        else {
            out++;
        }
        i++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}