//Below the main diagonal

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
    double sum, media;
    double table[12][12];
    char op;

    //initiling
    sum = 0;
    count = 0;

    //taking inputs
    cin >> op;

    //start nested loops for taking the the value of table
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            cin >> table[i][j];
        }
    }
    //end loops

    //calculationg sum
    for(i = 0; i < 12; i++) {
        for(j = 0; j < i; j++) {
            sum += table[i][j];
            count++;
        }
    }

    //cheaking condition, perform operation and viewing outputs
    switch(op) {
        case 'S':
            cout << sum << endl;
            break;
        
        case 'M':
            media = sum / count;
            cout << media << endl;
            break;
    }
    
    return 0;
}