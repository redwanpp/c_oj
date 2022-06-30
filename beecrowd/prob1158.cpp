//sum of consecutive odd numbers III

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int n, st_num, time, sum, count, i, j;

    cin >> n;

    for(i = 1; i <= n; i++) {
        cin >> st_num;
        cin >> time;

        sum = 0;
        count = 1;
        while(count <= time) {
            if(st_num % 2 == 1) {
                sum += st_num;
                count++;
            }
            st_num++;
        }
        cout << sum << endl;
    }

    return 0;
}