#include <iostream>
using namespace std;

int countOccurences(int *a, int n, int i, int *o, int j, int key)
{
  //base case
  if (i == n)
  {
    return j;
  }

  //recursive case
  if (a[i] == key)
  {
    o[j] = i;
    return countOccurences(a, n, i + 1, o, j + 1, key);
  }
  return countOccurences(a, n, i + 1, o, j, key);
}

void allOccurences(int a[], int n, int i, int key)
{
  //base case
  if (i == n)
  {
    return;
  }

  //recursive case
  if (a[i] == key)
  {
    cout << i << " ";
  }
  allOccurences(a, n, i + 1, key);
}

int main()
{
  int a[] = {1, 2, 5, 7, 3, 6, 8, 9, 3, 10, 11};
  int n = sizeof(a) / sizeof(int);
  int c[n];
  allOccurences(a, n, 0, 3);
  cout << endl;
  int count = countOccurences(a, n, 0, c, 0, 3);
  cout << count << endl;
  for (int i = 0; i < count; i++)
  {
    cout << c[i] << " ";
  }
  return 0;
}