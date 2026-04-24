#include <stdio.h>

void printa(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}

int main()
{
    int n;
    
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&arr[i]);
    }

    printa(arr,n);
}
