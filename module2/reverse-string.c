#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char revn[100];
    printf("Enter your name:");
    scanf("%s",name);

    int len=strlen(name);
    
    for (int i=0;i<len+1;i++)
    {
        revn[i]=name[len-1-i];
        
    }
    revn[len]='\0';
    printf("%s \n",revn);
}