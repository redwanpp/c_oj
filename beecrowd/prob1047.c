//Gaming time with minute

#include <stdio.h>

int main() {
    int start_hr, start_min, end_hr, end_min, game_hr, game_min;

    //taking input
    scanf("%d %d %d %d", &start_hr, &start_min, &end_hr, &end_min);

    //calculating
    if (start_hr < end_hr) {
        game_hr = end_hr - start_hr;
    }
    else if (start_hr > end_hr) {
        game_hr = (24 - start_hr) + end_hr;
    }
    else if (start_hr == end_hr && start_min < end_min) {
        game_hr = 0;
    }
    else {
        game_hr = 24;
    }

    if (start_min < end_min) {
        game_min = end_min - start_min;
    }
    else if (start_min > end_min) {
        game_hr--;
        game_min = (60 - start_min) + end_min;
    }
    else {
        game_min = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", game_hr, game_min);

    return 0;
}