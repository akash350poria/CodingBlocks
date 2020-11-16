#include <iostream>
using namespace std;

int firstOccurence(int a[], int n, int key)
{
  //base case
  if (n == 0)
  {
    return -1;
  }

  //recursive call
  int index;
  if (a[0] == key)
  {
    return 0;
  }
  index = firstOccurence(a + 1, n - 1, key);
  return index + 1;
}

int linearSearch(int a[], int n, int c, int key)
{
  //base case
  if (n == 0)
  {
    return -1;
  }

  //recusrive call
  if (a[c] == key)
  {
    return c;
  }
  int index = linearSearch(a, n, c + 1, key);
  return index;
}

int main()
{
  int a[] = {1, 2, 5, 7, 3, 6, 8, 9, 3, 10, 11};
  int n = sizeof(a) / sizeof(int);

  cout << firstOccurence(a, n, 3);
  cout << endl;
  cout << linearSearch(a, n, 0, 3);
  return 0;
}