//S sequence

#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(2);

    double s , one;
    int i;
    one = 1;
    s = 0;

    for(i = 1; i < 101; i++) {
        s += (one / i);
    }

    cout << s << endl;

    return 0;
}