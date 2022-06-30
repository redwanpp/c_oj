//S Sequence II

#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(2);

    double i, j, s;

    s = 0;

    for(i = 1, j = 1; i <= 39; i += 2, j *= 2) {
        s += (i/j);
    }

    cout << s <<endl;

    return 0;
}