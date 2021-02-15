#include <stdio.h>
#include <string.h>

void remove_filename(char *url);

int main()
{
    char s[] = "https://www.knking.com/index.html";
    remove_filename(s);
    
    printf("%s\n", s);
}

void remove_filename(char *url)
{
    char *p = NULL;
    while(*url++)
    {
        if(*url == '/')
            p = url;
    }
    
    *p = '\0';
}

