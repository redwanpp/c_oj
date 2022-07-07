#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    int i, inpt;
    int arr[10];

    cin >> inpt;

    for(i = 0; i < 10; i++) {
        arr[i] = inpt;
        inpt *= 2;

        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}