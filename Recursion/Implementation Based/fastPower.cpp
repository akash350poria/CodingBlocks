#include <iostream>
using namespace std;

int fastPower(int a, int n)
{
  //a^n= [a^(n/2)]^2   ; n=even
  //a^n= a[a^(n/2)]^2  ; n=odd

  //base base
  if (n == 0)
  {
    return 1;
  }

  //recursive case
  int sAns = fastPower(a, n / 2);
  int ans = sAns * sAns;

  if (n & 1)
  {
    return ans * a;
  }
  return ans;
}

int main()
{
  int a, n;
  cin >> a >> n;
  cout << fastPower(a, n);
  return 0;
}