#include <stdio.h>
#include <string.h>
int main()
{
    char fstring[100]="kailas";
    char sstring[100];

    strcpy(sstring,fstring);

    printf("%s",sstring);
}