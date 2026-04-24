#include <stdio.h>
void greatest(int a,int b,int c)
{
    if (a>b && a>c)
    {
        printf("%d is the largest out here\n",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the largest out here\n",b);
    }
    else 
    {
        printf("%d is the largest out here\n",c);
    }
}

int main()
{
    int a,b,c;
    printf("Enter the three numbers for check:");
    scanf("%d %d %d",&a,&b,&c);
    greatest(a,b,c);
}