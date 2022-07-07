//Array Replacement I

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    int x, i, arr[10];

    for(i = 0; i < 10; i++) {
        cin >> x;

        if(x <= 0) {
            arr[i] = 1;
        }
        else {
            arr[i] = x;
        }

        cout << "X[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}