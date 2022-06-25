//Grenais

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int goals[2], cheaker, count, inter, gremio, emphats;
    
    count = 0;
    inter = 0;
    gremio = 0;
    emphats = 0;

    while(true) {
        count++;

        cin >> goals[0];
        cin >> goals[1];

        if(goals[0] > goals[1]) {
            inter++;
        }
        else if(goals[0] < goals[1]) {
            gremio++;
        }
        else {
            emphats++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> cheaker;

        if(cheaker == 2) {
            break;
        }
    }

    cout << count << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << emphats << endl;

    if(inter > gremio) {
        cout << "Inter venceu mais" << endl;
    }
    else if(gremio > inter) {
        cout << "Gremio venceu mais" << endl;
    }
    else {
        cout << "Não houve vencedor" << endl;
    }

    return 0;
}