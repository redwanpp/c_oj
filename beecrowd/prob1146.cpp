//Growing sequence

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    int i, time;

    while(true) {
        cin >> time;

        if(time == 0) {
            break;
        }
        else {    
            for(i = 1; i <= time; i++) {
                if(i == time){
                    cout << i << endl;
                }
                else {
                    cout << i << " ";
                }
            }
        }
    }

    return 0;
}