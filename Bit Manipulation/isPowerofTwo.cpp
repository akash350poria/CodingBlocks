#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
  if (n == 1)
    return true;
  if (n <= 0)
    return false;
  while (n > 1)
  {
    int x = n & 1;
    if (x == 0)
    {
      n = n >> 1;
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  isPowerOfTwo(n) ? cout << "True" : cout << "False";
  return 0;
}