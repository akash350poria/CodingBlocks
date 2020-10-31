#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
  int j = sqrt(n);
  for (int i = 2; i <= j; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  isPrime(n) ? cout << "Prime" : cout << "Not prime";
  return 0;
}