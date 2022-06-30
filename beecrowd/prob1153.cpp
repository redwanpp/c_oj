//simple fibonacci

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, i, fact;
    fact = 1;

    cin >> n;

    if(n > 0 && n < 13) {
        for(i = n; i >= 2; i--) {
            fact *= i;
        }
        cout << fact <<endl;
    }

    return 0;
}