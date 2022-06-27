//Rest of a division

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    int num1, num2, i;

    cin >> num1;
    cin >> num2;

    if(num1 < num2) {
        for(i = num1 + 1; i < num2; i++) {
            
            if(i % 5 == 2) {
                cout << i << endl;
            }
            if(i % 5 == 3) {
                cout << i << endl;
            }
        }
    }
    else {
        for(i = num2 + 1; i < num1; i++) {
            if(i % 5 == 2) {
                cout << i << endl;
            }
            if(i % 5 == 3) {
                cout << i << endl;
            }
        }
    }
    
    return 0;
}