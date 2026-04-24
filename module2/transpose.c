#include <stdio.h>
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    int tran[3][2];

//transposing algorithm
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            tran[j][i]=arr[i][j];
        }
    }
//Printing Normal Matrix
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");    
    }
printf("\n");
//Printing Transposed Matrix
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
}