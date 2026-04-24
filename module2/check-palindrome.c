#include <stdio.h>
#include <string.h>
int main()
{
    int palindrome=1;
    char string[100];
    printf("Enter the string to check:");
    scanf("%s",string);
    int len=strlen(string);

    for (int i=0;i<len;i++)
    {
        if(string[i]!=string[len-1-i])
        {
            palindrome=0;
        }
    }
    if (palindrome)
    {
        printf("The given string is palindrome\n");
    }
    else
    {
        printf("The given string is not a palindrome\n");
    }
}