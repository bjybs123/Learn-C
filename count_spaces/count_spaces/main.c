
#include <stdio.h>

int count_spaces(const char s[]);

int main()
{
    printf("%d\n", count_spaces("abc22d"));
    
}

int count_spaces(const char s[])
{
    const char *p = s;
    while(*p)
        p++;

        
    return p - s;
}
