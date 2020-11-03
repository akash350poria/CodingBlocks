/*
To perform a*b without * operator

a*b=a + a*(b-1)
*/

#include <iostream>
using namespace std;

int multiAAndB(int a, int b)
{
  //base case
  if (b == 0)
  {
    return 0;
  }

  //Recursive call
  return a + multiAAndB(a, b - 1);
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << multiAAndB(a, b);
  return 0;
}
