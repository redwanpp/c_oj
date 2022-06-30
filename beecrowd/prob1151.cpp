//Easy fibonacci

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, count;

    count = 3;

    cin >> n;

    if(n > 0 && n < 46) {
        int num1, num2, fibo;

        num1 = 0;
        num2 = 1;

        cout << num1 << " " << num2 << " ";

        while(count <= n) {
            fibo = num1 + num2;
            num1 = num2;
            num2 = fibo;
            if(count == n) {
                cout << fibo << endl;
            }
            else {
                cout << fibo << " ";
            }
            count++;
        }
    }

    return 0;
}