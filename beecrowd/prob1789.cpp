//The Races of slugs

#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test_case;

    while(cin >> test_case) {
        int i, level;

        level = 0;

        int test[test_case];

        for(i = 0; i < test_case; i++) {
            cin >> test[i];
        }

        for(i = 0; i < test_case; i++) {
            if(test[i] < 10 && level < 1) {
                level = 1;
            }
            else if(test[i] >= 10 && test[i] < 20 && level < 2) {
                level = 2;
            }
            else if(test[i] >= 20){
                level = 3;
            }
        }

        cout << level << endl;
    }
    

    return 0;
}