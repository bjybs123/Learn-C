
#include <stdio.h>

int count_spaces(const char s[]);

int main()
{
    printf("%d\n", count_spaces("ab c 22d"));
    
}

int count_spaces(const char s[])
{s
    int count = 0;
    while(*s)
        if(*s++ == ' ')
            count++;

        
    return count;
}
