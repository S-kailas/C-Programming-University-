#include <stdio.h>
int main()
{
    int num,count=0;
    int arr[3][3]={{1,2,3},{3,4,2},{3,5,4}};

    printf("Enter the number to seach:");
    scanf("%d",&num);
    

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (arr[i][j]==num)
            {
                count++;
            }
        }
    }
    if (count>0)
    {
        printf("Number %d found %d times in the matrix",num,count);
    }
    else
    {
        printf("Number not found in the matrix");
    }
}