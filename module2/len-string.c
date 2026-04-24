#include <stdio.h>
int main()
{
    char name[10];
    printf("Enter your name:");
    scanf("%s",name);

    int len=0;
        while (name[len] !='\0')
        {
            len++;
        }
    printf("Length of your name %d \n",len);
}