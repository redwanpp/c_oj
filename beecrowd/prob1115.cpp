//Quadrant

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y;

    while(true) {
        cin >> x;
        cin >> y;

        if(x == 0 || y == 0){
            break;
        }
        else{
            if(x > 0 && y > 0) {
                cout << "primeiro" << endl;
            }
            else if(x > 0 && y < 0) {
                cout << "quarto" << endl;
            }
            else if(x < 0 && y < 0) {
                cout << "terceiro" << endl;
            }
            else {
                cout << "segundo" << endl;
            }
        }
    }

    return 0;
}