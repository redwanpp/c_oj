//Even or odd with array

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n, i;
    
    cin >> n;

    if(n < 10001) {
        int arr[n];
        for(i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for(i = 0; i < n; i++) {
            if(arr[i] == 0) {
                cout << "NULL" << endl;
            }

            else if(arr[i] > 0) {
                if(arr[i] % 2 == 0) {
                    cout << "EVEN POSITIVE" << endl;
                }
                else {
                    cout << "ODD POSITIVE" << endl;
                }
            }

            else {
                if(arr[i] % 2 == 0) {
                    cout << "EVEN NEGATIVE" << endl;
                }
                else {
                    cout << "ODD NEGATIVE" << endl;
                }
            }
        }
    }
    
    return 0;
}