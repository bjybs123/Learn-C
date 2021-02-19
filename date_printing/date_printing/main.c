//
//  main.c
//  date_printing
//
//  Created by jiyong on 2021/02/20.
//

#include <stdio.h>

int main()
{
    int month, day, year;
    char *month_name[] = { "January", "February", "March", "April", "May",
                               "June", "July", "August", "September", "October",
                               "November", "December" };
    printf("Enter a date (mm/dd/yyyy) : ");
    scanf(" %2d/ %2d/ %4d", &month, &day, &year);
    
    printf("You entered the date %s %d, %d\n", month_name[month - 1], day, year);
}
