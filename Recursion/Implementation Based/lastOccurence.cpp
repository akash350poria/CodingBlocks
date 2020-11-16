#include <iostream>
using namespace std;

int lastOccurence(int a[], int n, int key)
{
  //base case
  if (n == 0)
  {
    return -1;
  }

  //recursive case
  int index;
  index = lastOccurence(a + 1, n - 1, key);
  if (index == -1)
  {
    if (a[0] == key)
    {
      return 0;
    }
    else
    {
      return -1;
    }
  }
  return index + 1;
}

int main()
{
  int a[] = {1, 2, 5, 7, 3, 6, 8, 9, 3, 10, 11};
  int n = sizeof(a) / sizeof(int);
  cout << lastOccurence(a, n, 3);
  return 0;
}