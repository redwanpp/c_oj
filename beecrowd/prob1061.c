//Event time

#include <stdio.h>
#include <string.h>

int main() {
    char str[3];
    int start_day, end_day, start_hr, end_hr, start_min, end_min, start_sec, end_sec, day, hr, min, sec;
    char ch;

    //taking inputs
    scanf("%s %d", str, &start_day);
    scanf("%d %c %d %c %d", &start_hr, &ch, &start_min, &ch, &start_sec);
    scanf("%s %d", str, &end_day);
    scanf("%d %c %d %c %d", &end_hr, &ch, &end_min, &ch, &end_sec);

    if(start_sec > end_sec) {
        sec = (end_sec + 60) - start_sec;
        start_min++;
    }
    else {
        sec = end_sec - start_sec;
    }

    if(start_min > end_min) {
        min = (end_min + 60) - start_min;
        start_hr++;
    }
    else {
        min = end_min - start_min;
    }

    if(start_hr > end_hr) {
        hr = (end_hr + 24) - start_hr;
        start_day++;
    }
    else {
        hr = end_hr - start_hr;
    }

    day = end_day - start_day;

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hr);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);

    return 0;
}