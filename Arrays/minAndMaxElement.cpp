#include <iostream>
#include <climits>
//climits allows you to get max values of a data type
using namespace std;
int main()
{
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int a[n];
  cout << "Enter elements: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int largest = INT_MIN;
  int smallest = INT_MAX;
  // for (int i = 0; i < n; i++)
  // {
  //   if (a[i] < smallest)
  //   {
  //     smallest = a[i];
  //   }
  //   if (a[i] > largest)
  //   {
  //     largest = a[i];
  //   }
  // }
  for (int i = 0; i < n; i++)
  {
    largest = max(largest, a[i]);
    smallest = min(smallest, a[i]);
  }
  cout << "MAX ELEMENT: " << largest << endl;
  cout << "MIN ELEMENT: " << smallest;
  return 0;
}
