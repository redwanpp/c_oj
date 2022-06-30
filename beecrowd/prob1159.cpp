//Sum of consecutive even number

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(true) {
        int x, sum, count;
        count = 0;
        sum = 0;

        cin >> x;

        if(x == 0) {
            break;
        }
        else {
            while(count < 5) {
                    if(x % 2 == 0) {
                    sum += x;
                    count++;
                }
                x++;
            }
        }
        cout << sum << endl;
    }

    return 0;
}