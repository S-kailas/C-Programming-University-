#include <stdio.h>
int main()
{
    int arr[5]={5,6,2,3,1};
    int n=5;
    for (int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    for (int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}