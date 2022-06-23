//Even square

#include <iostream>
using namespace std;

#define endl "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int num, i, sq;

    cin >> num;
    if(num > 4 && num < 2001) {
        for(i = 1; i <= num; i++) {
            if(i % 2 == 0) {
                sq = i * i;
                cout << i << "^" << 2 << " = " << sq << endl;
            }
        }
    }
    
    return 0;
}