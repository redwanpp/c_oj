//Exceeding Z

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, z, count, checker;

    cin >> x;
    z = x;

    while (true) {
        cin >> z;
        
        if(z > x) {
            break;
        }
    }

    checker = 0;

    while (true) {
        checker += x;
        x++;
        count++;

        if(checker > z){
            break;
        }
    }

    cout << count << endl;

    return 0;
}