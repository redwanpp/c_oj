//Sequence

#include <iostream>
#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int i, j;

    for(i = 1, j = 60; j >= 0; i +=3, j -= 5) {
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}