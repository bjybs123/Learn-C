

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    int i, sum = 0;
    for(i = argc - 1; i > 0; ++i)
        sum += atoi(argv[i]);
    
    /* !!ASCCI TO INTEGER expect character pointer type
     and turn it into integer!!*/
    
    return sum;
}
