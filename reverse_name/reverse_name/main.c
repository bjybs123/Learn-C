#include <stdio.h>
#include <string.h>

void reverse_name(char *);

int main()
{

    reverse_name("Lousie Armstrong");
}

void reverse_name(char *str)
{
    char *last_name;
    char first_name;
    
    first_name = *str++;
    
    while(*str++ != ' ');
    while(*str == ' ')
        str++;
    
    strcpy(last_name, str);
    
    printf("%s, %c.\n", last_name, first_name);
    
    
}
