#include <stdio.h>
#include <ctype.h>

#define MAX_LINE 100

void encrypt(char *message, int shift);
int read_line(char *str, int max);

int main()
{
    int quan;
    char line[MAX_LINE];
    printf("Enter message to be encrypted : ");
    read_line(line, MAX_LINE);
    printf("Enter shift amount (1-25) : ");
    scanf("%d", &quan);
    encrypt(line, quan);
    printf("Encrypted message : %s\n", line);
    
}

int read_line(char *str, int max)
{
    int i = 0, c;
    
    while((c = getchar()) != '\n')
        if(i < max)
            str[i++] = c;
    str[i] = '\0';
    printf("readline over\n");
    return i;
}

void encrypt(char *message, int shift)
{
    while(*message)
    {
        if(isalpha(*message))
        {
            if(isupper(*message))
                *message = ((*message - 'A') + shift) % 26 + 'A';
            else
                *message = ((*message - 'a') + shift) % 26 + 'a';
        }
        message++;
    }

}
