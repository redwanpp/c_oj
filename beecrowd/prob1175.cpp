//Array Change I

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    int i, j, temp, arr[20];

    for(i = 0; i < 20; i++) {
        cin >> arr[i];
    }

    for(i = 0, j = 19; i < 10; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}