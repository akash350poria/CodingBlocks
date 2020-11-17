#include <iostream>
using namespace std;

void bubbleSort(int *a, int n)
{
  //Base case
  if (n == 1)
  {
    return;
  }

  //Recursive case
  //Shifted the largest element in the current part to the end
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      swap(a[i], a[i + 1]);
    }
  }
  //Sort for remaining n-1 elements
  bubbleSort(a, n - 1);
}

void bubbleSortRecursive(int *b, int j, int n)
{
  //Base Case
  //To check if all elements are swapped
  if (n == 1)
  {
    return;
  }
  //To check the number of passes of current sub problem
  if (j == n - 1)
  {
    //If j points to last element that means you have shifted largest element for the current sub problem
    //Now sort for the remaining n-1 elements
    bubbleSortRecursive(b, 0, n - 1);
  }

  //Recursive case
  if (b[j] > b[j + 1])
  {
    swap(b[j], b[j + 1]);
  }
  //To move largest element to the end
  bubbleSortRecursive(b, j + 1, n);
  return;
}

int main()
{
  int a[] = {5, 3, 1, 2, 4};
  int n1 = sizeof(a) / sizeof(int);
  bubbleSort(a, n1);
  for (auto x : a)
  {
    cout << x << " ";
  }
  cout << endl;
  int b[] = {10, 7, 9, 6, 8};
  int n2 = sizeof(b) / sizeof(int);
  bubbleSortRecursive(b, 0, n2);
  for (auto y : b)
  {
    cout << y << " ";
  }
  return 0;
}