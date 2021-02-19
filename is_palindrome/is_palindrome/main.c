//
//  main.c
//  is_palindrome
//
//  Created by jiyong on 2021/02/20.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LINE 100

bool is_palimdrome(const char *message);
int read_line_exwhitespace(char *str, int max);

int main()
{
    char words[MAX_LINE];
    printf("Enter a message : ");
    read_line_exwhitespace(words, MAX_LINE);
    if(is_palimdrome(words))
        printf("Palimdrome\n");
    else
        printf("Not a palimdorme\n");
}

int read_line_exwhitespace(char *str, int max)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n')
    {
        if(isalpha(ch))
            if(i < max - 1)
                str[i++] = ch;
    }
    str[i] = '\0';
    
    return i;
}

bool is_palimdrome(const char *message)
{
    const char *p1;
    const char *p2;
    
    int len = strlen(message);
    
    p1 = message;
    p2 = message + len - 1;
    
    while(p1 <= p2)
    {
        if(*p1 != *p2)
            return false;
        p1++;
        p2--;
    }
    
    return true;
}
