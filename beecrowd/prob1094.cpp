//Experiment 

#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;

typedef struct {
    int quantity;
    char ch;
} experiment;

int  main(){
    int number_of_experiment, i, rabbit, rat, frog, total;
    double per_rab, per_rat, per_fro;

    cin >> number_of_experiment;

    experiment use_animal[number_of_experiment];

    for(i = 0; i < number_of_experiment; i++) {
        cin >> use_animal[i].quantity;
        cin >> use_animal[i].ch;
    }

    rabbit = 0;
    rat = 0;
    frog = 0;

    for(i = 0; i < number_of_experiment; i++) {
        if(use_animal[i].ch == 'C') {
            rabbit += use_animal[i].quantity;
        }
        else if(use_animal[i].ch == 'R') {
            rat += use_animal[i].quantity;
        }
        else {
            frog += use_animal[i].quantity;
        }
    }

    total = rabbit + rat + frog;

    per_rab = (rabbit * 100) / (double)total;
    per_rat =(rat * 100) / (double)total;
    per_fro = (frog * 100) / (double)total;

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;

    cout << fixed << setprecision(2) << "Percentual de coelhos: " << per_rab << " %" << endl;
    cout << "Percentual de ratos: " << per_rat << " %" << endl;
    cout << "Percentual de sapos: " << per_fro << " %" << endl;
    
    return 0;
}