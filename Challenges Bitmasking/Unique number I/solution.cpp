#include <iostream>
using namespace std;

int uniqueNum(int a[], int n)
{
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ a[i];
  }
  return ans;
}

int main()
{
  int a[10000];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << uniqueNum(a, n);
  return 0;
}