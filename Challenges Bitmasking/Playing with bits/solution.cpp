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

int sumOfBits(int a, int b)
{
  int sum = 0;
  for (int i = a; i <= b; i++)
  {
    int nBits = countBits(i);
    sum += nBits;
  }
  return sum;
}

int main()
{
  int t;
  cin >> t;
  int a, b;
  while (t--)
  {
    cin >> a >> b;
    cout << sumOfBits(a, b) << endl;
  }
  return 0;
}