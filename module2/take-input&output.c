#include <stdio.h>
int main()
{

    int arr[2][3];

    //input
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("Enter the numbers:");
            scanf("%d",&arr[i][j]);
        }
    }

    //output
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}