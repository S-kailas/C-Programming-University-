#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char revn[100];

    printf("Enter your name: ");
    scanf("%99s", name);

    int len = strlen(name);

    for (int i = 0; i < len; i++)
    {
        revn[i] = name[len - 1 - i];
    }

    revn[len] = '\0';  // critical

    printf("%s\n", revn);
}