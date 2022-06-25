//score vallidation

#include <iostream>
#include <iomanip>
#define endl "\n"


using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(2);

    double inpt, num[2], avg;
    int count, i;
    count = 0;

    while(true) {
        cin >> inpt;

        if(inpt < 0) {
            cout << "nota invalida" << endl;
        }
        else if (inpt > 10) {
            cout << "nota invalida" << endl;
        }
        else {
            num[count] = inpt;
            count++;
        }

        if(count == 2){
            break;
        }
    }

    avg = (num[0] + num[1]) / 2;

    cout << "media = " << avg << endl;    

    return 0;
}