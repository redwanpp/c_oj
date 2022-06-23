//Event time

#include <stdio.h>

int main() {
    //declaring variables
    int start_day, start_hr, start_min, start_sec, end_day, end_hr, end_min, end_sec, event_duration_day, event_duration_hr, event_duration_min, event_duration_sec;

    //taking data from user
    //starting time
    printf("Dia ");
    scanf("%d", &start_day);
    printf("\n");
    scanf("%d", &start_hr);
    printf(" : ");
    scanf("%d", &start_min);
    printf(": ");
    scanf("%d", &start_sec);
    //ending time
    printf("\n");
    printf("Dia ");
    scanf("%d", &end_day);
    printf("\n");
    scanf("%d", &end_hr);
    printf(" : ");
    scanf("%d", &end_min);
    printf(": ");
    scanf("%d", &end_sec);

    //cheaking condition and calculating
    if (start_sec > end_day) {
        event_duration_sec = 60 + end_sec - start_sec;
        start_min++;
    }
    else {
        event_duration_sec = end_sec - start_sec;
    }
    if(start_min > end_min) {
        event_duration_min = 60 + end_min - start_min;
        start_hr++;
    }
    else {
        event_duration_min = end_min - start_min;
    }
    if(start_hr > end_hr) {
        event_duration_hr = 24 + end_hr - start_hr;
        start_day++;
    }
    else {
        event_duration_hr = end_hr - start_hr;
    }
    
    event_duration_day = end_day - start_day;

    printf("%d dia(s)\n", event_duration_day);
    printf("%d hora(s)\n", event_duration_hr);
    printf("%d minuto(s)\n", event_duration_min);
    printf("%d segundo(s)\n", event_duration_sec);

    return 0;
}