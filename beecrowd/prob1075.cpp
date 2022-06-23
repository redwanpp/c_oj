//Remainding 2

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int i, num;

    cin >> num;

    for(i = 1; i < 10000; i++) {
        if(i % num == 2) {
            cout << i << endl;
        }
    }

    return 0;
}