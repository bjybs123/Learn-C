#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_COL 20

int read_line(char *, int);

int main()
{
    char str[MAX_COL + 1];
    char largest[MAX_COL + 1];
    char smallest[MAX_COL + 1];
    
    printf("Enter word : ");
    read_line(str, MAX_COL);
    strcpy(smallest, strcpy(largest, str));
    
    while(strlen(str) != 4)
    {
        printf("Enter word : ");
        read_line(str, MAX_COL);
        
        if(strcmp(largest, str) < 0)
            strcpy(largest, str);
        if(strcmp(smallest, str) > 0)
            strcpy(smallest, str);
    }
    
    
    printf("Smallest word : %s\n", smallest);
    printf("Largest word : %s\n", largest);
}

int read_line(char *str, int MAX)
{
    int c, i = 0;
    
    while((c = getchar()) != '\n')
        if(i < MAX)
            str[i++] = c;
    str[i] = '\0';
    return i;
}
