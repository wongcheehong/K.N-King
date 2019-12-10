#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> /* rand, srand */
#include <ctype.h>

#define win true
#define lose false
int roll_dice(void);
bool play_game(void);

int main()
{
    char again;
    int wins = 0,losses = 0;

    srand((unsigned) time(NULL));

    do
    {
        if(play_game() == win)
            wins++;
        else
            losses++;

        fflush(stdin);
        printf("Play again? ");
        scanf(" %c", &again);

    }while(again == 'y' || again == 'Y');

    printf("\nWins: %d   Losses: %d", wins, losses);

    return 0;
}

int roll_dice(void)
{
    int roll1, roll2;

    roll1 = rand() % 6 + 1;
    roll2 = rand() % 6 + 1;
    return (roll1 + roll2);
}

bool play_game(void)
{
    int sum = roll_dice(),point;

    printf("You rolled: %d\n", sum);

    if(sum == 7 || sum == 11){
        printf("You win!\n\n");
        return win;
    }
    else if(sum == 2 || sum == 3 || sum == 12){
        printf("You lose!\n\n");
        return lose;
    }

    point = sum;
    printf("Your point is %d\n", point);

    while (sum = roll_dice()){
        printf("You rolled: %d\n", sum);

        if(sum == point){
            printf("You win!\n\n");
            return win;
        }
        if(sum == 7){
            printf("You lose!\n\n");
            return lose;
        }
    }
}
