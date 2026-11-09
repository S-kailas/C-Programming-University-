#include <stdio.h>

int binarysearch(int target,int arr[],int n)
{
  int low=0,high=n-1;
  while (low<=high)
  {
    int mid=low+(high-low) /2 ; //can also use (high+low)/2 , low+(high-low)/2 is used to prevent integer overflow in large arrays

    if (arr[mid]==target)
    {
      return mid;
    }

    else if (arr[mid]<target)
    {
      low=mid-1; //for searching right half
    }
    else
    {
      high=mid-1; //for searching left half
    }
  }
  return -1;
}

int main()
{
  int arr[5]={3,5,34,44,55};
  int target=34;

  int index=binarysearch(target,arr,5);

  if ( index==-1)
  {
    printf("No element found!\n");
  }
  else 
  {
    printf("Element Found at index %d\n",index);
  }
}
