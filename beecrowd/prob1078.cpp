//Multiplication table

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int num, i; 

    cin >> num;

    for(i = 1; i < 11; i++) {
        cout << i << " x " << num << " = " << (i*num) << endl;
    }

    return 0;
}