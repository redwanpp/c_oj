//Divisors I

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int number, divisor;

    cin >> number;

    for(divisor = 1; divisor <= number; divisor++) {
        if(number % divisor == 0) {
            cout << divisor << endl;
        }
    }

    return 0;
}