#include <stdio.h>
int main()
{
    int arr[3][3]={{1,3,4},{2,4,5},{4,6,7}};
    int sum1=0,sum2=0,sum3=0;

    for (int i=0;i<3;i++)
    {
        sum1=sum1+arr[0][i];
        sum2=sum2+arr[1][i];
        sum3=sum3+arr[2][i];
    }
    printf("Sum of First row is %d\n",sum1);   
    printf("Sum of First row is %d\n",sum2);   
    printf("Sum of First row is %d\n",sum3);   
}