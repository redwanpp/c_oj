//PUM

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, count, i, j;

    cin >> n;
    count = 1;

    for(i = 0; i < n; i++) {
        for(j = 0; j < 4; j++) {
            if(count % 4 == 0) {
                cout << "PUM";
                count++;
            }
            else {
                cout << count << " ";
                count++;
            }
        }
        cout << endl;
    }

    return 0;
}