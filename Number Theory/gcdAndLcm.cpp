#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if (a == 0)
  {
    return b;
  }
  return gcd(b % a, a);
}

int main()
{
  int a, b;
  cin >> a >> b;
  int g = gcd(a, b);
  cout << g << endl;
  int l = (a * b) / g;
  cout << l;
  return 0;
}