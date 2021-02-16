#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main()
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    
    const char *rank_code[] = {"two of", "three of", "four of", "five of", "six of" ,"seven of", "eight of",
        "nine of", "T of", "Jack of", "Queen of", "King of", "Ace of"};

    const char *suit_code[] = {"clubs", "diamonds", "hearts", "spades"};
        
    srand((unsigned int)(time(NULL)));
    
    printf("Enter number of cards in hand : ");
    scanf("%d", &num_cards);
    
    printf("Your hand : \n");
    while(num_cards > 0)
    {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if(!in_hand[suit][rank])
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %s %s\n", rank_code[rank], suit_code[suit]);
        }
    }
}
