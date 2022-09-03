#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    int weight, i, n, flag;

    flag = false;

    cin >> weight;

    if(weight >= 1 && weight <= 100) {
        n = weight / 2;
        for(i = 1, weight -= 1; i <= n; i++, weight--) {
            if(i % 2 == 0 && weight % 2 == 0) {
                flag = true;
            }
        }
    }

    if(flag) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}