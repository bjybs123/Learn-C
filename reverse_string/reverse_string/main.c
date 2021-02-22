#include <stdio.h>
#include <string.h>

void reverse(char *message);

int main()
{
    char line[10] = "KEXT";
    printf("%s\n", line);
    reverse(line);
    printf("%s\n", line);
}

void reverse(char *message)
{
    char *p1, *p2;
    int len = (int)strlen(message);
    p1 = message;
    p2 = message + len - 1;
    
    while(p1 <= p2)
    {
        int temp;
        temp = *p2;
        *p2 = *p1;
        *p1 = temp;
        
        p1++;
        p2--;
    }
}
