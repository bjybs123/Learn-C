#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main()
{
    char file[100] = "JIYONG.EXE";
    char ex[100] = {0};
    get_extension(file, ex);
    
    printf("Extension : %s\n", ex);
}

void get_extension(const char *file_name, char *extension)
{
    while(*file_name)
    {
        if(*file_name++ == '.')
        {
            strcpy(extension, file_name);
            return;
        }
    }
}
