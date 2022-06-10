//Simple short URI

#include <stdio.h>

int main() {
    int inpt_arr[3], original[3];
    int i, j, temp;
    
    for(i = 0; i < 3; i++) {
        scanf("%d", &inpt_arr[i]);
        original[i] = inpt_arr[i];
    }

    for(i = 0; i < 3; i++) {
       for(j = 0; j < 3 - i -1; j++){
            if(inpt_arr[j] > inpt_arr[j+1] ) {
            temp = inpt_arr[j];
            inpt_arr[j] = inpt_arr[j + 1] ;
            inpt_arr[j + 1] = temp;
            }       
        }
    }
    
    for (i = 0; i < 3; i++) {
        printf("%d\n", inpt_arr[i]);
    }
    printf("\n");
    for(i = 0; i < 3; i++) {
        printf("%d\n", original[i]);
    }
    

    return 0;
}