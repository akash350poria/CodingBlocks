#include <iostream>
using namespace std;

int *selectionSort(int a[], int n)
{
  int minIndex;
  for (int i = 0; i < n - 1; i++)
  {
    minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < a[minIndex])
        minIndex = j;
    }
    swap(a[i], a[minIndex]);
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
  int *r = selectionSort(arr, n);
  cout << "Sorted array is: ";
  for (int i = 0; i < n; i++)
    cout << r[i] << " ";
  return 0;
}
