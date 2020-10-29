#include <iostream>
using namespace std;

int main()
{
  int a, b;
  int ans = 0;
  cin >> a >> b;
  while (a <= b)
  {
    int x = a ^ b;
    ans = max(ans, x);
    a++;
  }
  cout << ans;
  return 0;
}