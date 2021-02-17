#include <stdio.h>
#include <string.h>

double compute_average_word_legth(const char *sentence);

int main()
{
    printf("%.1f\n", compute_average_word_legth("It was deja vu all over again."));
}

double compute_average_word_legth(const char *sentence)
{
    double words = 0;
    double chars = 0;
    do{
        if(*sentence == ' ' || *sentence == '\0')
            ++words;
        else
            chars++;
    }while(*sentence++);
    
    return chars / words;
}
