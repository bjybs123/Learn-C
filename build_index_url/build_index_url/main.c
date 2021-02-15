
#include <stdio.h>
#include <string.h>

#define MAX_LINE 100

void build_index_url(const char *domain, char *index_url);

int main()
{
    char domain[MAX_LINE] = {0};
    char m_domain[MAX_LINE] = {0};
    printf("Enter Domain : ");
    scanf("%s", domain);
    build_index_url(domain, m_domain);
    
    printf("Domain entered : %s\n", m_domain);
}

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "//index.html");
}
