//Interval 2

#include <stdio.h>

int main() {
    int n, i, in, out;
    i = 0; 
    in = 0;
    out = 0;

    //taking the input of n as the size of array
    scanf("%d", &n);
    
    //declaring array
    int arr[n];

    //taking arrays input
    while(i < n) {
        scanf("%d", &arr[i]);
        i++;
    }

    //cheaking condition
    i = 0;
    while (i < n) {
        if(arr[i] >= 10 && arr[i] <= 20) {
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