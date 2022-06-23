//Sequence IJ 3

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int i, j, a;

    i = 1;
    j = 7;
    a = j - 3;
    
    while (i < 10) {
        while(j > a) {
            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
        i += 2;
        j += 5;
        a = j - 3;
    }

    return 0;
}