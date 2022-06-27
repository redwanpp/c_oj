//multiples of 13

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num1, num2, sum, i;

    cin >> num1;
    cin >> num2;

    sum = 0;

    if(num1 < num2) {
        for(i = num1; i <= num2; i++) {
            if(i % 13 != 0) {
                sum += i;
            }
        }
    }
    else {
        for(i = num2; i <= num1; i++) {
            if(i % 13 != 0) {
                sum += i;
            }
        }
    }

    cout << sum << endl;
    

    return 0;
}