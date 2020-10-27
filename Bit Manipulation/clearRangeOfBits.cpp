#include <iostream>
using namespace std;

int clearLastIBits(int n, int i)
{
  //To clear last i bit from right create a mask
  //mask is created by -1<<i;
  //Perform & operation of mask and num
  int mask = (-1) << i;
  int ans = n & mask;
  return ans;
}

int clearBitsInRange(int n, int i, int j)
{
  //To clear bits in range [i,j]
  //mask is combination (OR) of two masks a and b
  //a=0<<(j+1)
  //b=(1<<i)-1
  //mask=a|b
  //Perform & operation of mask and num
  int a = (-1) << (j + 1);
  int b = (1 << i) - 1;
  int mask = a | b;
  int ans = n & mask;
  return ans;
}

int main()
{
  int n;
  int i, j;
  cout << "Enter num: ";
  cin >> n;
  cout << "Enter i and j: ";
  cin >> i >> j;
  int ans1 = clearLastIBits(n, i);
  int ans2 = clearBitsInRange(n, i, j);
  cout << "Cleared last i bits: " << ans1 << endl;
  cout << "Cleared bits in range [i,j]: " << ans2 << endl;
  return 0;
}