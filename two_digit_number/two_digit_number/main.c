#include <stdio.h>


int main()
{
    
    char *tens[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
        "sixteen", "sevneteen", "eighteen", "nineteen"};
    char *ones[] = {"-one", "-two", "-three", "-four", "-five", "-six", "-seven",
        "-eight", "-nine"};

    int num;
    
    printf("Enter a two-digit number : ");
    scanf("%d", &num);
    
    if(num / 10 != 1)
        printf("You entered the number %s%s\n", tens[num / 10 - 2], ones[num % 10 - 1]);
    else
        printf("You entered the number %s\n", teens[num % 10]);
    
}


