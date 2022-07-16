//Array fill III

#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    double arr[100];
    double inpt;
    int count;

    count = 0;

    cin >> inpt;

    while(count < 100) {
        arr[count] = inpt;
        inpt = (inpt / 2);        

        cout << fixed << setprecision(4) << "N[" << count << "] = " << arr[count] << endl;
        
        count++;
    }

    return 0;
}