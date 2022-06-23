//weighted averages

#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int row, i;
    double avg;

    cin >> row;

    double value[row][3];

    for(i = 0; i < row; i++) {
        cin >> value[i][0];
        cin >> value[i][1];
        cin >> value[i][2];
    }

    for(i = 0; i < row; i++) {
        avg = ((value[i][0] * 2.0) + (value[i][1] * 3.0) + (value[i][2] * 5.0)) / (2.0+3.0+5.0);

        cout << fixed << setprecision(1) << avg <<endl;
    }

    return 0;
}
