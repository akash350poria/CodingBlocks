#include <iostream>
using namespace std;

int countBits(int n)
{
  int ans = 0;
  while (n > 0)
  {
    n = n & (n - 1);
    ans++;
  }
  return ans;
}

int main()
{
  int t;
  cin >> t;
  int n;
  while (t--)
  {
    cin >> n;
    cout << countBits(n) << endl;
  }
  return 0;
}