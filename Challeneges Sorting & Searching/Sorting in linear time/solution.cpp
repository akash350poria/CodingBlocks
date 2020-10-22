#include <iostream>
using namespace std;

int main()
{
  int n;
  int a[1000];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  //Sort Array
  int l = 0;
  int m = 0;
  int h = n - 1;
  while (m <= h)
  {
    if (a[m] == 0)
    {
      swap(a[l], a[m]);
      l++;
      m++;
    }
    else if (a[m] == 1)
    {
      m++;
    }
    else
    {
      swap(a[m], a[h]);
      h--;
    }
  }
  //Print sorted array
  for (int i=0;i<n;i++)
  {
    cout << a[i] << endl;
  }
  return 0;
}
