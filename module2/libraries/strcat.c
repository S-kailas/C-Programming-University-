#include <stdio.h>
#include <string.h>

int main()
{
    char name[100]="kailas ";
    char surname[100]="Sasikumar";

////strcat(destination,source)
    strcat(name,surname);
    printf("%s",name);
    return 0;
}   