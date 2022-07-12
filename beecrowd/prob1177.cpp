//Array fill II

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n[1000];
    int t, i, count;

    cin >> t;

    count = 0;
    i = 0;

    while (count < 1000) {
        n[count] = i;

        cout << "N[" <<  count << "] = " << n[count] << endl;

        i++;
        count++;

        if(i == t) {
            i = 0;
        }
    } 

    return 0;
}