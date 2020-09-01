#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
  int start = 0, end = n - 1;
  int mid;
  while (start <= end)
  {
    mid = (start + end) / 2;
    if (arr[mid] == key)
      return mid;
    else if (arr[mid] > key)
      end = mid - 1;
    else
      start = mid + 1;
  }
  return -1;
}

int main()
{
  int n, key;
  cout << "Enter number of elements: ";
  cin >> n;
  int a[n];
  cout << "Enter elements in increasing order: ";
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << "Enter element you are looking for: ";
  cin >> key;
  int result = binarySearch(a, n, key);
  cout << "Element present at: " << result;
  return 0;
}