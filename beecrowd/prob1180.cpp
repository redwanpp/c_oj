//Lowest number and position

#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size, low, pos, i;

    cin >> size;

    if(size > 0 && size <= 1000) {
        int arr[size];

        for(i = 0; i < size; i++) {
            cin >> arr[i];
        }

        low = arr[0];
        pos = 0;

        for(i = 0; i < size; i++) {
            if(arr[i] < low) {
                low = arr[i];
                pos = i;
            }
        }
        cout << "Menor valor: " << low << endl << "Posicao: " << pos << endl;
    }

    return 0;
}