#include <stdio.h>
#include <string.h>
int main()
{
    char name[10];
    
    printf("Enter your name:");
    scanf("%s",name);
    int len=strlen(name);
    printf("Hi %s length of your name is %d",name,len);
}