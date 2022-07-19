//Line in array

#include <iostream>
#include <iomanip>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(1);

    double table[12][12];

    int line, i, j;
    char ch;

    double sum, media;

    sum = 0;

    cin >> line;
    
    if(line >= 0 && line < 12) {
        cin >> ch;

        for(i = 0; i < 12; i++) {
            for(j = 0; j < 12; j++) {
                cin >> table[i][j];                
            }
        }

        for(i = 0; i < 12; i++) {
            sum += table[line][i];
        }


        switch(ch) {
            case 'S':
                cout << sum << endl;
                break;
            case 'M':
                media = sum / 12.0;
                cout << media << endl;
                break;
        }
    }
    
    return 0;
}