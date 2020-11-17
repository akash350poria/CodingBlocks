#include <iostream>
using namespace std;

/*
Its divide and conquer sorting algorithm
1. Array is divided into two sub arrays of equal size about the middle element
2. Sub array are sorted recursively
3. Merge the sorted array to get the final sorted array

5,3,4,2,1 ==>  5,3 and 4,2,1
5,3 ==> 5 and 3 => 3,5

4,2,1 => 4 and 2,1
2,1 => 2 and 1=> 1,2

1,2 and 4 => 1,2,4

3,5 and 1,2,4 => 1,2,3,4,5
*/

void mergeArray(int *a, int s, int e)
{
  int mid = s + (e - s) / 2;
  int i = s;
  int j = mid + 1;
  int k = s;

  int temp[100];
  while (i <= mid and j <= e)
  {
    if (a[i] < a[j])
    {
      temp[k++] = a[i++];
    }
    else
    {
      temp[k++] = a[j++];
    }
  }
  while (i <= mid)
  {
    temp[k++] = a[i++];
  }
  while (j <= e)
  {
    temp[k++] = a[j++];
  }

  //Replace elements in the original array
  for (int i = s; i <= e; i++)
  {
    a[i] = temp[i];
  }
}

void mergeSort(int *a, int s, int e)
{
  //BASE CASE
  if (s >= e)
  {
    //Only one element
    return;
  }

  //RECURSIVE CASE
  //Divide array
  int mid = s + (e - s) / 2;

  //Recursive sort
  mergeSort(a, 0, mid);
  mergeSort(a, mid + 1, e);

  //Merge array
  mergeArray(a, s, e);
}

int main()
{
  int a[] = {5, 10, 3, 4, 8, 2, 6, 9, 7, 1};
  int n = sizeof(a) / sizeof(n);
  mergeSort(a, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}