#include <stdio.h>
#include <string.h>

int main() {
    int testCase;

    scanf("%d", &testCase);

    if(testCase > 0 && testCase <= 100) {
        int count, len;
        char word[250];

        count = 0;

        while(count < testCase) {
            scanf("%s", word);
            len = strlen(word);
            if(len <= 10) {
                printf("%s\n", word);
            }
            else {
                printf("%c%d%c\n", word[0], len-2, word[len-1]);
            }
            count++;
        }
    }    

    return 0;
}