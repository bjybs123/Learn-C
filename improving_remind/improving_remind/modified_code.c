//copied from K.N.King C programming : A modern approach



#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char *, int);

int main()
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[20], msg_str[MSG_LEN + 1];
    int day, month, hour, min, i, j, num_remind = 0;
    
    for(;;)
    {
        if(num_remind == MAX_REMIND)
        {
            printf("-- no space left --\n");
            break;
        }
        
        printf("Enter day and remainder : ");
        scanf(" %2d/ %2d", &month, &day);
        if(!day || !month)
            break;
        else if(day < 0 || day > 31 || month < 1 || month > 12)
        {
            printf("There's no %d\n", day);
            while(getchar() != '\n');
            continue;
        }
        
        scanf(" %2d: %2d", &hour, &min);
        
        sprintf(day_str, "%2d/%2d %2d:%2d", month, day, hour, min);
        read_line(msg_str, MSG_LEN);
        
        for(i = 0; i < num_remind; ++i)
            if(strcmp(day_str, reminders[i]) < 0)
                break;
        for(j = num_remind; j > i; --j)
            strcpy(reminders[j], reminders[j - 1]);
        
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);
        
        num_remind++;
    }
    
    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; ++i)
        printf(" %s\n", reminders[i]);
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
