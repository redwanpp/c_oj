//Heighest position

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int i, max, position;

    int numbers[100];

    for(i = 0; i < 100; i++) {
        cin >> numbers[i];
    }

    max = 0; 
    position = 0;

    for(i = 0; i < 100;) {
        if (numbers[i] > max) {
            max = numbers[i];
            position = i+1;
        }
    }

    cout << max << endl;
    cout << position << endl;

    return 0;
}
