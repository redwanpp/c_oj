#include <stdio.h>

int main() {
    int size, i;
    scanf("%d", &size);
    int cab[size][2];
    int cab2[size];

    for(i = 0; i < size; i++) {
        scanf("%d %d", &cab[i][0], &cab[i][1]);
        cab2[i] = cab[i][0] + cab[i][1];
    }

    for(i = 0; i < size; i++) {
        printf("%d\n", cab2[i]);
    }

    return 0;
}