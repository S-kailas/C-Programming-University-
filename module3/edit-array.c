#include <stdio.h>
void printa(int arr[],int len)
{
    for (int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
}

void edita(int arr[],int index,int a)
{
    arr[index]=a;
}

int main()
{
    int array[]={3,4,5,2,4,5};
    int len=sizeof(array)/sizeof(array[0]);
    printa(array,len);
    printf("\n");
    edita(array,2,103);
    printa(array,len);
}