//Event time

#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string day;
    char ch;
    int st_sec, st_min, st_hr, st_day, ed_sec, ed_min, ed_hr, ed_day, st_time, ed_time, time;

    cin >> day >> st_day;
    cin >> st_hr >> ch >> st_min >> ch >> st_sec;

    cin >> day >> ed_day;
    cin >> ed_hr >> ch >> ed_min >> ch >> ed_sec; 

    st_time = (st_day * 86400) + (st_hr * 3600) + (st_min 
    * 60) + st_sec;

    ed_time = (ed_day * 86400) + (ed_hr * 3600) + (ed_min * 60) + ed_sec;

    time = ed_time - st_time;

    cout << (time / 86400) << " dia(s)" << endl;
    
    time %= 86400;

    cout << (time / 3600) << " hora(s)" << endl;

    time %= 3600;

    cout << (time / 60) << " minuto(s)" << endl;

    time %= 60;

    cout << time << "  segundo(s)" << endl;
    

    return 0;
}