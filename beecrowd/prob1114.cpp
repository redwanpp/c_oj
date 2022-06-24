//Fixed password

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int pass;

    while(true) {
        cin >> pass;

        if(pass == 2002) {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else {
            cout << "Senha Invalida" << endl;
        }
    }

    return 0;
}