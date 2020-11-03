#include <iostream>
#include <vector>

using namespace std;

void primeFactors(int n)
{
  vector<pair<int, int>> factors;
  int count = 0;
  for (int i = 2; i * i <= n; i++)
  {
    count = 0;
    if (n % i == 0)
    {
      while (n % i == 0)
      {
        count++;
        n = n / i;
      }
      factors.push_back(make_pair(i, count));
    }
  }
  if (n != 1)
  {
    factors.push_back(make_pair(n, 1));
  }
  for (auto p : factors)
  {
    cout << p.first << "^" << p.second << " , ";
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    primeFactors(n);
    cout << endl;
  }
  return 0;
}