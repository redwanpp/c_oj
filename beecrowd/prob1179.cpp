//Array fill IV

#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i, j, countEven, countOdd;
    int arr[15], even[5], odd[5];

    countEven = 0;
    countOdd = 0;

    for(i = 0; i < 15; i++) {
        cin >> arr[i];
    }

    for(i = 0; i < 15; i++) {
        if(arr[i] % 2 == 0) {
            even[countEven] = arr[i];
            countEven++;

            if(countEven == 5) {
                for(j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << even[j] << endl;
                }
                countEven = 0;
            }
        }
        if(arr[i] % 2 != 0) {
            odd[countOdd] = arr[i];
            countOdd++;

            if(countOdd == 5) {
                for(j = 0; j < 5; j++) {
                    cout << "impar[" << j <<"] = " << odd[j] << endl;
                }
                countOdd = 0;
            }
        }
    }
    for(i = 0; i < countOdd; i++) {
        cout << "impar[" << i << "] = " << odd[i] << endl;
    }

    for(i = 0; i < countEven; i++) {
        cout << "par[" << i << "] = " << even[i] << endl;
    }

    return 0;
}