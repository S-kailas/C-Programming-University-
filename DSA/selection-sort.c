//Selection Sorttt
//1.Divide the array into two parts: sorted (initially empty) and unsorted (the whole array).

//2.Scan the unsorted region to find the minimum element.

//3.Swap that minimum element with the first element of the unsorted region, expanding the sorted portion by one.

//4.Repeat until the entire array is sorted.
#include <stdio.h>
void selectionsort(int arr[],int n)
{
  for (int i=0;i<n;i++)
  {
    int min_index=i;
    //scanning the array from the right side of min element for finding the minimum element by comparing the current min element(only the min_element's index is noticed )
    for (int j=i+1; j<n; j++)
    {
      if (arr[min_index]>arr[j])
      {
        min_index=j;
      }
    }
    
    //shifting the min_element to the left side
    if (min_index !=i)
    {
      int temp=arr[i];
      arr[i]=arr[min_index];
      arr[min_index]=temp;
    }
  }
}

int main()
{
  int arr[5]={5,2,20,0,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  selectionsort(arr,n);

  for (int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
