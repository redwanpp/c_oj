//Summing cosecutive integers

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i, a, n, sum;

    cin >> a;

    n = 0;

    while(n <= 0) {
        cin >> n;
    }

    sum = 0;
    for(i = a; i <= (a+n-1); i++) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}