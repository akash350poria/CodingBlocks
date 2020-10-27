#include <iostream>
using namespace std;

int countBits(int n)
{
  //Check last bit is set
  //To check laa bit is set or not do num&1
  //If yes increment counter
  //Right shift num by one position
  //O(log n)
  int ans = 0;
  while (n > 0)
  {
    ans += (n & 1);
    n = n >> 1;
  }
  return ans;
}

int countBitsFast(int n)
{
  //Perform ADD operation of num with num-1
  //n&(n-1) removes the last set bit
  //O(k), k=num of set bits
  int ans = 0;
  while (n > 0)
  {
    n = n & (n - 1);
    ans++;
  }
  return ans;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "Number of set bits are: " << countBits(n) << endl;
  cout << "Number of set bits are: " << countBitsFast(n) << endl;
  cout << "Number of set bits are: " << __builtin_popcount(n) << endl;
  return 0;
}