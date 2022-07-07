//Perfect Number

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test_case, count;

    count = 0;

    cin >> test_case;

    if(test_case > 0 && test_case <= 100) {
        while (count < test_case) {
            int inpt, sum, i;
            sum = 0;

            cin >> inpt;

            for(i = 1; i < inpt; i++) {
                if(inpt % i == 0) {
                    sum += i;
                }
            }

            if(sum == inpt) {
                cout << inpt << " eh perfeito" << endl;
            }
            else {
                cout << inpt << " nao eh perfeito" << endl;
            }
            count++;
        }
    }
    
    return 0;
}