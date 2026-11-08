#include <stdio.h>

int linearsearch(int val,int arr[],int n)
{
  for (int i=0;i<n;i++)
    {
     if (val == arr[i])
     {
        return i;
     }
    }
  return -1;
}

int main()
{
  int arr[7]={2,5,3,5,6,3,5};
  int val;

  printf("Enter the number to search in array:");
  scanf("%d",&val);
  
  int response=linearsearch(val,arr,7);
 
  if (response==-1)
  {
    printf("No element found!\n");
  }
  else 
  {
    printf("Element Found at index %d\n",response);
  }
}

