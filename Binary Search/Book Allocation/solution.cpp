#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int a[], int n, int m, int mid)
{
  int studentCount = 1;
  int currentPages = 0;
  for (int i = 0; i < n; i++)
  {
    if (currentPages + a[i] > mid)
    {
      studentCount++;
      currentPages = a[i];
      if (studentCount > m)
      {
        return false;
      }
    }
    else
    {
      currentPages += a[i];
    }
  }
  return true;
}

int maxPages(int a[], int n, int m)
{
  int sum = 0;
  if (n < m)
  {
    return -1;
  }
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
  int s = a[n - 1];
  int e = sum;
  int ans = INT_MAX;
  while (s <= e)
  {
    int mid = (s + e) / 2;
    if (isPossible(a, n, m, mid))
    {
      ans = min(ans, mid);
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return ans;
}

int main()
{
  int t, n, m, a[1000];
  cin >> t;
  while (t--)
  {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int maxVal = maxPages(a, n, m);
    cout << maxVal << endl;
  }
  return 0;
}