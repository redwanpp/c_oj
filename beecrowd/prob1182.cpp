//column in array

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

    double sum, media;
    int i, j, clmn;
    char ch;

    sum = 0;

    cin >> clmn;

    if(clmn >= 0 & clmn < 12) {
        cin >> ch;
        
        for(i = 0; i < 12; i++) {
            for(j = 0; j < 12; j++) {
                cin >> table[i][j];
            }
        }

        for(i = 0; i < 12; i++) {
            sum += table[i][clmn];
        }

        switch(ch) {
            case 'S':
                cout << sum << endl;
                break;
            case 'M':
                media = sum /12.0;
                cout << media << endl;
                break;
        }
    }

    return 0;
}