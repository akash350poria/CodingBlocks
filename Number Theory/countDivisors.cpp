#include <iostream>
#include <vector>

using namespace std;

const int N = 1000000;
vector<int> primes;
int p[N] = {0};

void sievePrime()
{
  for (int i = 2; i <= N; i++)
  {
    if (p[i] == 0)
    {
      primes.push_back(i);
      for (int j = i; j <= N; j += i)
      {
        p[j] = 1;
      }
    }
  }
}

int numOfDivisors(int n)
{
  int ans = 1;
  int count = 0;
  for (int i = 0; primes[i] * primes[i] <= n; i++)
  {
    if (n % primes[i] == 0)
    {
      count = 0;
      while (n % primes[i] == 0)
      {
        count++;
        n = n / primes[i];
      }
      ans = ans * (count + 1);
    }
  }
  if (n != 1)
  {
    ans = ans * 2;
  }
  return ans;
}

int main()
{
  sievePrime();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << numOfDivisors(n) << endl;
  }
  return 0;
}