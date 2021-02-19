#include <stdio.h>
#include <string.h>

#define MAX_SEN 30
#define MSG_LEN 20

void print(const char *);
void read_lines(char *[]);
int main()
{
    int i, j, c, terminate_char = 0;
    char words[MAX_SEN][MSG_LEN] = {0};
    printf("Enter a sentence : ");
    i = j = 0;
    while((c = getchar()) != '\n')
    {
        if(c == ' ' || c == '\t')
        {
            words[i][j] = '\0';
            j = 0;
            i++;
            continue;
        }
        if(c == '.' || c == ',' || c == '?' || c == '!')
        {
            terminate_char = c;
            words[i][j] = '\0';
            break;
        }
        else if(i < MAX_SEN)
            words[i][j++] = c;
    }
    
    while(i > 0)
        printf("%s ",  words[i--]);
    printf("%s%c\n", words[i], terminate_char);
}
