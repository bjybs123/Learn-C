#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_PLANETS 9

bool planet_equal(char *, char *);

int main(int argc, char *argv[]) {

    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
   
    int i, j;
    
    for(i = 1; i < argc; ++i)
    {
        for(j = 0; j < NUM_PLANETS; ++j)
            if(planet_equal(argv[i], planets[j]))
            {
               printf("%s is planet %d\n", argv[i], j + 1);
            }

               
    if(j == NUM_PLANETS)
        printf("%s is not a planet\n", argv[i]);
    }
    
               
}

bool planet_equal(char *p, char *q)
{
    int i;
    for(i = 0; toupper(p[i]) == toupper(q[i]); ++i)
        if(p[i] == '\0')ㄴ
            return true;
    return false;
}
