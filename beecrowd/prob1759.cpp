//ho ho ho

#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int inpt, cnt;

    cnt = 0;
    
    cin >> inpt;
    while(cnt < inpt) {
        cout << "Ho";
        cnt++;

        if(cnt == inpt) {
            cout << "!";
        }
        else {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}