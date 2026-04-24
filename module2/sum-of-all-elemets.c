#include <stdio.h>
int main()
{
    int arr[3][3]={{2,4,5},{5,6,2},{8,2,7}};
    int sum=0;

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("Total sum of the elements of %d",sum);
}