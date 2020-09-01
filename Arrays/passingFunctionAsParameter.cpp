#include <iostream>
using namespace std;

bool compare(int a, int b)
{
  return a > b;
}

int *bubbleSort(int a[], int n, bool (&cmp)(int a, int b))
{
  //perform n-1 iterations
  for (int i = 1; i <= n - 1; i++)
  {
    //pairwise swapping in unsorted array
    //indexs of unsorted array [0,n-i-1]
    for (int j = 0; j <= n - i - 1; j++)
    {
      if (cmp(a[j], a[j + 1]))
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
  int *r = bubbleSort(arr, n, compare);
  cout << "Sorted array is: ";
  for (int i = 0; i < n; i++)
    cout << r[i] << " ";
  return 0;
}
