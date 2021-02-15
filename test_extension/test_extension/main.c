#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main()
{
    printf("%d\n", test_extension("jiyong.TcT", "Txt"));
}

bool test_extension(const char *file_name, const char *extension)
{
    while(*file_name++ != '.');
    
    while(*file_name && *extension)
    {
        if(toupper(*file_name++) == toupper(*extension++));
        else break;
    }
    
    return  !*file_name ?   true : false;
}
