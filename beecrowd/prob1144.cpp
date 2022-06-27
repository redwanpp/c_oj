//Logical sequence

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size, i, j;

    cin >> size;

    int arr1[size][3], arr2[size][3];

    for(i = 0; i < size; i++) {
        for(j = 0; j < 3; j++) {
            if(j == 0) {
                arr1[i][j] = (i+1);
                arr2[i][j] = arr1[i][j];
            }
            else if(j == 1) {
                arr1[i][j] = (i+1) * (i + 1);
                arr2[i][j] = arr1[i][j] + 1;
            }
            else {
                arr1[i][j] = arr1[i][j-1] * (i + 1);
                arr2[i][j] = arr1[i][j] + 1;
            }
        }
    }

    for(i = 0; i < size; i++) {
        for(j = 0; j < 3; j++) {
            if(j == 2) {
                cout << arr1[i][j] << endl; 
            }
            else {
                cout << arr1[i][j] << " ";
            }
        }
        for(j = 0; j < 3; j++) {
            if(j == 2) {
                cout << arr2[i][j] << endl;
            }
            else {
                cout << arr2[i][j] << " ";
            }
        }
    }

    return 0;
}