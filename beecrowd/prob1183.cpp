//Avobe the main Diagonal

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
    double table[12][12];
    double sum, media;
    char op;

    sum = 0;
    count = 0;
    
    //taking inputs
    cin >> op;

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            cin >> table[i][j];
        }
    }

    //calculating sum
    for(i = 0; i < 12; i++) {
        for(j = i + 1; j < 12; j++) {
            sum += table[i][j];
            count++;
        }
    }

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