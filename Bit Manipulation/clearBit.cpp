#include <iostream>
using namespace std;

int clearBit(int n, int i)
{
  //To clear i bit from right create a mask
  //mask is created by ~(1<<i);
  //Perform & operation of mask and num
  int mask = ~(1 << i);
  int ans = n & mask;
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
  int ans = clearBit(n, i);
  cout << "Num after clearing " << i << "th bit " << ans;
  return 0;
}