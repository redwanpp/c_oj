//Avobe the secondery diagonal

#include <iostream>
#include <iomanip>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(1);

    //declaring variables
    int i, j, count;
    double sum, avg;
    double table[12][12];
    char op;

    //initialing
    sum = 0;
    count = 0;

    //taking inputs
    cin >> op;

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            cin >> table[i][j];
        }
    }

    //calculation sum;
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12 - i - 1; j++) {
            sum += table[i][j];
            count++;
        }
    }

    //cheaking condition and printing outputs
    switch(op) {
        case 'S':
            cout << sum << endl;
            break;
        
        case 'M':
            avg = sum / count;
            cout << avg << endl;
            break;
    }

    return 0;
}