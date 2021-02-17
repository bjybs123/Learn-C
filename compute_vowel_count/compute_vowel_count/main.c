#include <stdio.h>
#include <ctype.h>

#define MAX_LINE 100

int compute_vowel_count(const char *sentnce);
int read_line(char *str, int n);


int main()
{
    char word[MAX_LINE];
    
    printf("Enter a sentence : ");
    read_line(word, MAX_LINE);
    
    printf("Your sentence contains %d vowels\n", compute_vowel_count(word));
}

int read_line(char *str, int n)
{
    int c, i = 0;
    while((c = getchar()) != '\n' && i < n - 1)
        str[i++] = c;
    
    return i;
}

int compute_vowel_count(const char *sentence)
{
    int vowels = 0;
    
    while(*sentence)
        switch (toupper(*sentence++))
        {
            case 'A':   case 'E':   case 'I':   case 'O':   case 'U':
                vowels++;
                break;
            default:
                break;
        }
    
    return vowels;
}
