#include <iostream>
using namespace std;

int *bubbleSort(int a[], int n)
{
  //perform n-1 iterations
  for (int i = 1; i <= n - 1; i++)
  {
    //pairwise swapping in unsorted array
    //indexs of unsorted array [0,n-i-1]
    for (int j = 0; j <= n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(a[j], a[j + 1]);
      }
    }
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
  int *r = bubbleSort(arr, n);
  cout << "Sorted array is: ";
  for (int i = 0; i < n; i++)
    cout << r[i] << " ";
  return 0;
}
