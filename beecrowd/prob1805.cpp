#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int num1, num2, mins, maxs, result;

    cin >> num1 >> num2;

    if(num1 >= 1 && num1 <= num2 && num1 <= 1000000000) {
        mins = ((num1 - 1) * num1) / 2;
        maxs = (num2 * (num2 + 1)) / 2;
        result = maxs - mins;

        cout << result << endl;
    }

    return 0;
}