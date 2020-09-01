#include <iostream>
#include <algorithm>
using namespace std;

int compare(int a, int b)
{
  return a > b;
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
  //Pass compare() as third argument to change the order of sorting
  //sort(arr, arr + n);
  sort(arr, arr + n, compare);
  cout << "Sorted array is: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}
