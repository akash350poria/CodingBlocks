#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
  //Num is converted to Base 10 integer
  //Last bit is extracted, multiplied with pow(10,n) where n=0,1,...
  //Result is added to ans
  int ans = 0;
  int p = 1;
  while (n > 0)
  {
    int lastBit = n & 1;
    ans += p * lastBit;
    p = p * 10;
    n = n >> 1;
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter num: ";
  cin >> n;
  cout << "Binary representation is: " << decimalToBinary(n);
  return 0;
}