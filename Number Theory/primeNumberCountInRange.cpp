#include <iostream>
#include <vector>
using namespace std;

/*
To count the number of primes number in the range [a,b]
The idea is to build a cummulative sum of count of prime numbers
So number of prime numbers in the range [a,b] would be c[b]-c[a-1]
*/

long long n = 10000000;
vector<int> p(n + 1, 0);

vector<int> c(n + 1, 0);

void sievePrime()
{
  for (long long i = 3; i <= n; i += 2)
  {
    p[i] = 1;
  }
  for (long long i = 3; i <= n; i += 2)
  {
    if (p[i] == 1)
    {
      for (long long j = i * i; j <= n; j += i)
      {
        p[j] = 0;
      }
    }
  }
  p[2] = 1;
}

void cummulativeSum()
{
  for (int i = 1; i <= n; i++)
  {
    c[i] = c[i - 1] + p[i];
  }
}

int main()
{
  sievePrime();
  cummulativeSum();
  int t;
  cout << "Enter number of test cases: ";
  cin >> t;
  while (t--)
  {
    long long a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Number of primes in range [" << a << "," << b << "] are: ";
    cout << c[b] - c[a - 1] << endl;
  }
  return 0;
}