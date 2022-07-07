//Array selection I

#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;

int main() {
    int i;
    double arr[100];

    for(i = 0; i < 100; i++) {
        cin >> arr[i];

        if(arr[i] < 11) {
            cout << fixed << setprecision(1) << "A[" << i <<"] = " << arr[i] << endl;
        }
    }

    return 0;
}