//Asecnding Desending

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test_case1, test_case2;

    while(true) {
        cin >> test_case1;
        cin >> test_case2;

        if(test_case1 == test_case2) {
            break;
        }
        else {
            if(test_case1 > test_case2) {
                cout << "Decrescente" << endl;
            }
            else {
                cout << "Crescente" << endl;
            }
        }
    }

    return 0;
}