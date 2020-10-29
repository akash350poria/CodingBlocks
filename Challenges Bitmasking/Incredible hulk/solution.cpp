#include <iostream>
using namespace std;

int nearestPower(int n)
{
  int ans;
  for (int i = n; i >= 1; i--)
  {
    if ((i & (i - 1)) == 0)
    {
      ans = i;
      break;
    }
  }
  return ans;
}

int numOfSteps(int n)
{
  int ans = 0;
  while (n > 0)
  {
    int k = nearestPower(n);
    ans++;
    n = n - k;
  }
  return ans;
}

int main()
{
  int t;
  int n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cout << numOfSteps(n) << endl;
  }
  return 0;
}