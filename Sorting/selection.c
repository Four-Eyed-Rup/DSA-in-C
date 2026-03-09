// Write a program for sorting an array by using selection sort 

#include <stdio.h>

void selection_sort(int arr[], int len)
{
  int i, j, min_idx, temp;
  // selection sorting
  for (i = 0; i < len-1; i++)
  {
    min_idx = i;
    // smallest value initializing in min during traversing
    for (j = i + 1; j < len ; j++)
    {
      if (arr[min_idx] > arr[j])
      {
        min_idx = j;
      }
    }
    // swaping
    temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
     
  }
  printf("\n Sorted array------------------------------");
  for(i=0; i<len; i++){
    printf("\narr[%d]: %d", i, arr[i]);
  }
}

int main()
{
  int i, n, arr[20];
  printf("\n Enter the number of elements of array: ");
  scanf("%d", &n);

  // initialize array elements
  for (i = 0; i < n; i++)
  {
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  selection_sort(arr, n);

  return 0;
}
