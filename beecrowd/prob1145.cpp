//Logical sequence 2

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int element , column, i, j;

    cin >> column;
    cin >> element;

    
    if(element >= column) {
        i = 1;
        while (i <= element) {
            j = 1;
            while(j <= column) {
                if(j == column) {
                    cout << i << endl;
                }
                else {
                    cout << i << " ";
                }
                j++;
                i++;
            }
        }     
    }

    return 0;
}