//Square and cubic

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, i, j, outpt;

    cin >> n;

    if(n > 1 && n < 1000) {
        //start loops
        for(i = 1; i <= n; i++) {
            for(j = 1; j < 4; j++) {
                if(j == 1) {
                    outpt = i;
                }
                else if(j == 2) {
                    outpt = i * i;
                }
                else if(j == 3){
                    outpt *= i;
                }

                //outputs
                if(j == 3){
                    cout << outpt;
                }
                else {
                    cout << outpt << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}