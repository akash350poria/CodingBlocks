#include <iostream>
#include <algorithm>

using namespace std;

bool placeCow(int a[], int n, int c, int s)
{
  int lastCow = a[0];
  int count = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] - lastCow >= s)
    {
      lastCow = a[i];
      count++;
    }
    if (count == c)
    {
      return true;
    }
  }
  return false;
}

int minDistance(int a[], int n, int c)
{
  int s = 0;
  int e = a[n - 1] - a[0];
  int mid;
  int ans = 0;
  while (s <= e)
  {
    mid = (s + e) / 2;
    bool canPlaceCow = placeCow(a, n, c, mid);
    if (canPlaceCow)
    {
      s = mid + 1;
      ans = mid;
    }
    else
    {
      e = mid - 1;
    }
  }
  return ans;
}

int main()
{
  int n, c, t, result;
  int a[10000];
  cin >> t;
  while (t--)
  {
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    result = minDistance(a, n, c);
    cout << result << endl;
  }
  return 0;
}