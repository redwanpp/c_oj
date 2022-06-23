//Sequence 2

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int i, j;

    for(i = 1 ; i <10; i +=2) {
        for(j = 7; j > 4; j--) {
            cout <<"I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}