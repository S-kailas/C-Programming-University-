#include <stdio.h>

int facto(int n)
{
    if (n==1)
    {
        return 1;
    }
    n=n*facto(n-1);

}

int main()
{
    int fact=facto(5);
    printf("Factorial is %d",fact);
}