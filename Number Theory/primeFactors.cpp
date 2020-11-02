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

vector<int> factorsOfNum(int num)
{
  vector<int> facts;
  facts.clear();
  int i = 0;
  int f = primes[i];
  while (f * f < num)
  {
    if (num % f == 0)
    {
      facts.push_back(f);
      while (num % f == 0)
      {
        num = num / f;
      }
    }
    i++;
    f = primes[i];
  }

  if (num != 1)
  {
    facts.push_back(num);
  }

  return facts;
}

int main()
{
  sievePrime();
  int t;
  cin >> t;
  while (t--)
  {
    int num;
    cin >> num;
    vector<int> f = factorsOfNum(num);
    for (auto x : f)
    {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}