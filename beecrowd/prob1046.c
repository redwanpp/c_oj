//Game time

#include <stdio.h>

int main() {
    int start_time, finish_time, game_time;

    scanf("%d %d", &start_time, &finish_time);

    if(start_time < finish_time) {
        game_time = finish_time - start_time;
    }
    else if (start_time > finish_time) {
        game_time = (24 - start_time) + finish_time;
    }
    else {
        game_time = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", game_time);

    return 0;
}