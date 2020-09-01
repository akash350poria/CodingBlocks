#include <iostream>
using namespace std;
int main()
{
  int i, n, key;
  cout << "Enter number of elements: ";
  cin >> n;
  int a[n];
  cout << "Enter elements: ";
  for (i = 0; i < n; i++)
    cin >> a[i];
  cout << "Enter element you are looking for: ";
  cin >> key;
  for (i = 0; i < n; i++)
  {
    if (a[i] == key)
    {
      cout << key << " found at position: " << i + 1;
      break;
    }
  }
  if (i == n)
  {
    cout << key << " not found";
    return 0;
  }
}