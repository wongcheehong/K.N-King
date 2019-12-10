#include <stdbool.h>    /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

/* external variables */
int hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze hand, and print_result *
 *       repeatedly.                                      *
 *********************************************************/
int main(void)
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 *********************************************************/
void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit, i;
    bool bad_card, duplicate_card;
    int cards_read = 0;

    while (cards_read < NUM_CARDS)
    {
        bad_card = false;
        duplicate_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();   //read the rank entered
        switch (rank_ch)
        {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();   //read the suit entered
        switch (suit_ch)
        {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while((ch = getchar()) != '\n') //check the third ch
            if (ch != ' ') bad_card = true; //If the third ch is not a space then it is bad card.

        for(i = 0; i < cards_read; i++)
            if(hand[i][RANK] == rank && hand[i][SUIT] == suit)
                duplicate_card = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (duplicate_card)
            printf("Duplicate card; ignored.\n");
        else
        {
            hand[cards_read][RANK] = rank;
            hand[cards_read][SUIT] = suit;
            cards_read++;
        }
    }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-king; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs                   *
 *********************************************************/
void analyze_hand(void)
{
    int i, j, smallest, temp_rank, temp_suit;
    int rank, run;

    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    /* sorts the cards in hand by rank via selection sort */
    for(i = 0; i < NUM_CARDS; i++)
    {
        smallest = i;
        for(j = i + 1; j < NUM_CARDS; j++)
            if(hand[j][RANK] < hand[i][RANK])
                smallest = j;
        temp_rank = hand[i][RANK];
        temp_suit = hand[i][SUIT];
        hand[i][RANK] = hand[smallest][RANK];
        hand[i][SUIT] = hand[smallest][SUIT];
        hand[smallest][RANK] = temp_rank;
        hand[smallest][SUIT] = temp_suit;
    }

    /* checks for flush */
    for (i = 0; i < NUM_SUITS - 1; i++)
        if(hand[i][SUIT] != hand[i+1][SUIT])
            flush = false;

    /* check for straight */
    for(i = 0; i < NUM_CARDS - 1; i++)
        if(hand[i][RANK]+1 != hand[i+1][RANK])
            straight = false;

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for(i = 0; i < NUM_CARDS;)
    {
        rank = hand[i][RANK];
        run = 0;
        do
        {
            run++;
            i++;
        }while(i < NUM_CARDS && hand[i][RANK] == rank);

        switch(run)
        {
            case 2: pairs++; break;
            case 3: three = true; break;
            case 4: four = true; break;
        }
    }
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs                                *
 *********************************************************/
void print_result(void)
{
    if (straight && flush) printf("Straight flush");
    else if (four)         printf("Four of a kind");
    else if (three &&
             pairs == 1)   printf("Full house");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Straight");
    else if (three)        printf("Three of a kind");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");

    printf("\n\n");
}
