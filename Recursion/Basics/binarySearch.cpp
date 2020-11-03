#include <iostream>
using namespace std;

int binarySearch(int a[], int s, int e, int key)
{
  if (s <= e)
  {
    int mid = (s + e) / 2;
    if (a[mid] == key)
    {
      return mid;
    }
    else if (a[mid] > key)
    {
      return binarySearch(a, s, mid - 1, key);
    }
    else
    {
      return binarySearch(a, mid + 1, e, key);
    }
  }
  return -1;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 10;
  cout << binarySearch(arr, 0, n - 1, 3);
  cout << endl;
  cout << binarySearch(arr, 0, n - 1, 11);
  return 0;
}