#include <iostream>
using namespace std;

int *insertionSort(int a[], int n)
{
  int key, j;
  //start loop from 1 to n-1
  for (int i = 1; i <= n - 1; i++)
  {
    key = a[i];
    //place key in the correct position
    j = i - 1;
    while (j >= 0 and a[j] > key)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
  return a;
}

int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int *r = insertionSort(arr, n);
  cout << "Sorted array is: ";
  for (int i = 0; i < n; i++)
    cout << r[i] << " ";
  return 0;
}
