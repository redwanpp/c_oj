//Prime number

#include <iostream>
#include <cmath>
#define endl "\n"

using namespace std;

int isPrime(int num) {
    int i, root, flag;

    flag = 1;

    if(num == 2) {
        flag =  1;
    }
    else if(num % 2 == 0) {
        flag = 0;
    }
    else {
        //root = sqrt(num);
        for(i = 3; i < num ; i++) {
            if(num % i==0) {
                flag = 0;
            }
        }
    }
    return flag;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase, count;
    count = 0;

    cin >> testCase;
    if(testCase > 0 && testCase <= 100) {
        while (count < testCase) {
            int inpt, cheak;

            cin >> inpt;

            if(inpt > 0 && inpt <=10000000) {
                cheak = isPrime(inpt);

                if(cheak) {
                    cout << inpt << " eh primo" << endl;
                }
                else {
                    cout << inpt << " nao eh primo" << endl;
                }
            }

            count++;
        }
    }
    

    return 0;
}