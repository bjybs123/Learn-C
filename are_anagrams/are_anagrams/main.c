#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


bool are_anagrams(const char *word1, const char *word2);


int main()
{
    printf("%d\n", are_anagrams("akos", "kaos"));
}

bool are_anagrams(const char *word1, const char *word2)
{
    int alpha[26] = {0};
    int sum = 0, i = 0;
    
    while(*word1)
    {
        if(isalpha(*word1))
            alpha[toupper(*word1) - 'A']++;
        word1++;
    }
    
    while(*word2)
    {
        if(isalpha(*word2))
            alpha[toupper(*word2) - 'A']--;
        word2++;
    }
    
    for(i = 0; i < 26; ++i)
        sum += alpha[i];
    
    return i == 0 ? true : false;
}
