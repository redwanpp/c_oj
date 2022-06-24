//Divinding x by y

#include <iostream>
#include <iomanip>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(1);

    int row, i;

    cin >> row;

    double test_case[row][2];
    double div;

    for(i = 0; i < row; i++) {
        cin >> test_case[i][0];
        cin >> test_case[i][1];
    }

    for(i = 0; i < row; i++) {
        if(test_case[i][1] == 0) {
            cout << "divisao impossivel" << endl;
        }
        else {
            div = test_case[i][0] / test_case[i][1];
            cout << div << endl;
        }
    }

    return 0;
}