#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc, res, count, x;
    string s;

    count = 0;
    x = 0;

    cin >> tc;
    

    while (tc > count) {
        cin >> s;
        if((s.compare("--X") == 0) ||(s.compare("X--") == 0)) {
            res = 1;
        }
        else {
            res = 2;
        }

        switch(res) {
            case 1: 
                x--;
                break;
            case 2:
                x++;
                break;
        }
        count++;
    }

    cout << x << endl;

    return 0;
}