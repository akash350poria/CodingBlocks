/*
To check if array of size=n is sorted we fix one element and check if the array of size=n-1 is sorted
If yes the we check if a[0]<=a[1]

f(n)= a[0]<=a[1] and f(n-1) is sorted
*/

#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{
  //base condition
  if (n == 0 or n == 1)
  {
    return true;
  }

  //Recursive call
  if (a[0] <= a[1] and isSorted(a + 1, n - 1))
  {
    return true;
  }
  return false;
}

int main()
{
  int arr1[] = {1, 2, 3, 4, 5};
  int n1 = 5;
  int arr2[] = {1, 2, 4, 3, 5, 6};
  int n2 = 6;
  isSorted(arr1, n1) ? cout << "Yes" : cout << "No";
  cout << endl;
  isSorted(arr2, n2) ? cout << "Yes" : cout << "No";
  return 0;
}