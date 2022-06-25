//Sevaral score with validation

#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(2);

    double inpt, avg, score[2];
    int count, cheaker;

    while(true) {
        A: 
        count = 0;
        while(true) {
            cin >> inpt;

            if(inpt < 0 || inpt > 10) {
                cout << "nota invalida" << endl;
            }
            else {
                score[count] = inpt;
                count++;
            }

            if(count == 2) {
                break;
            }
        }
        avg = (score[0] + score[1]) / 2;
        
        cout << "media = " << avg << endl;
        
        while(true) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> cheaker;
            
            if(cheaker == 1) {
                goto A;
            }
            else if(cheaker == 2) {
                return 0;
            }
        }
    }

    return 0;
}