#include <iostream>
using namespace std;

int setBit(int n, int i)
{
  //To set i bit from right create a mask
  //mask is created by 1<<i;
  //Perform | operation of mask and num
  //If o/p is 1 then bit is set
  int mask = 1 << i;
  int ans = n | mask;
  return ans;
}

int main()
{
  int n;
  int i;
  cout << "Enter num: ";
  cin >> n;
  cout << "Enter position: ";
  cin >> i;
  int ans = setBit(n, i);
  cout << "New num: " << ans;
  return 0;
}