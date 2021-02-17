#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LINE 100

int compute_scrabble_value(const char *word);
int read_line(char *, int);
int main()


{
    char word[MAX_LINE];
    printf("Enter a word : ");
    read_line(word, MAX_LINE);
    
    printf("Scrabble value : %d\n", compute_scrabble_value(word));
    
    return 0;
}

int read_line(char *str, int n)
{
    int c, i = 0;
    while((c = getchar()) != '\n' && i < n - 1)
        str[i++] = c;
    
    return i;
}

int compute_scrabble_value(const char *word)
{
    int value = 0;
    
    int scrabble[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    
    while(*word)
        value += scrabble[tolower(*word++) - 'a'];
    
    return value;
}
