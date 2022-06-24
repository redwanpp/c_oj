//sum of consecutive odd numbers 2

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int n, i, j, sum;
    
    cin >> n;

    int test_case[n][2];

    for(i = 0; i < n; i++) {
            cin >> test_case[i][0];
            cin >> test_case[i][1];
    }

    for(i = 0; i < n; i++) {
        sum = 0;

        if(test_case[i][0] > test_case[i][1]) {
            for(j = (test_case[i][1]+1); j < test_case[i][0]; j++) {
                if(j % 2 != 0) {
                    sum += j;
                }
            }
            cout << sum << endl;
        }
        else {
            for (j = (test_case[i][0]+1); j < test_case[i][1]; j++) {
                if(j % 2 != 0) {
                    sum += j;
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}