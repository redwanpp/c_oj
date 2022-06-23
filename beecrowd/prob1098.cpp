//Sequence IJ 4

#include <iostream>
#include <iomanip>
#include <math.h>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cout << fixed << setprecision(1);

    double i, j, a, ja;

    for(i = 0; i <= 200; i += 20) {
        a = i;
        a /= 100;
        for(j = 1; j <= 3; j++) {
            ja = j + a;
            if (a == (int)a && ja == (int)ja){
                cout << "I=" << (int)a << " J=" << (int)ja << endl;
            }
            else if(a == (int)a) {
                cout << "I=" << (int)a << " J=" << ja << endl;
            }
            else if(ja == (int)ja) {
                cout << "I=" << a << " J=" << (int)ja << endl;
            }
            else {
                cout << "I=" << a << " J=" << ja <<endl;
            }            
        }
    }

    return 0;
}