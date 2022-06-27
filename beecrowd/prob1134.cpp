//Fuel types

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int inpt, alcool, gasolin, diesel;

    alcool = 0;
    gasolin = 0;
    diesel = 0;

    cout << "MUITO OBRIGADO" << endl;

    while (true) {
        cin >> inpt;

        switch(inpt) {
            case 1:
                alcool++;
                break;
            case 2:
                gasolin++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                goto A;
            default:
                continue;
        }
    }

    A:
    
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolin << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}