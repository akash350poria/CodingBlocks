/*
To evaluate a^b;
a^b=a* a^(b-1)
*/

#include <iostream>
using namespace std;

int exp(int a, int b)
{
  //base case
  if (b == 0)
  {
    return 1;
  }

  //Recusrive call
  return a * exp(a, b - 1);
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << exp(a, b);
  return 0;
}