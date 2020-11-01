#include <iostream>
#include <math.h>
#include <vector>
#include <bitset>

using namespace std;

/*
To check if a number of order 10^10 or more is prime is not we check if number is less than 10^7
If yes then we check it from sieve array if its prime or not
Else we iterate over all the primes from start till sqrt(num) and check if any prime is a factor or not
If any prime number is a factor then the given number num is not prime
Else it is prime 
*/

const int n = 10000000;
bitset<100000005> b;
vector<int> p;

void sievePrime()
{
  //set all bits;
  b.set(); //1,1,1,1,....

  b[0] = b[1] = 0;

  for (long long int i = 2; i <= n; i++)
  {
    if (b[i])
    {
      p.push_back(i);
      for (long long int j = i * i; j <= n; j += i)
      {
        b[j] = 0;
      }
    }
  }
}

bool isPrime(long long int num)
{
  if (num <= n)
  {
    return b[num] == 1 ? true : false;
  }
  for (long long int i = 0; i <= sqrt(num); i++)
  {
    if (num % p[i] == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  sievePrime();
  //10000000019 prime
  //10000000018 not prime
  if (isPrime(1000000009))
  {
    cout << "Prime";
  }
  else
  {
    cout << "Not prime";
  }
  return 0;
}