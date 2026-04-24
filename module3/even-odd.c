#include <stdio.h>
void check(int a)
{
    if (a%2==0)
    {
        printf("The given number is even");
    }
    else
    {
        printf("The given number is odd");
    }
}

int main()
{
    check(4);
}