//Ages

#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(2);

    double age, sum_age, count, avg;

    sum_age = 0;
    count = 0;

    while(true) {
        cin >> age;
        if(age < 0) {
            break;
        }
        sum_age += age;
        count++;
    }

    avg = sum_age / count;

    cout << avg << endl;

    return 0;
}