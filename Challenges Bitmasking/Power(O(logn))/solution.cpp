#include <iostream>
using namespace std;

/*
  To get value of pow(a,n), i.e, a raise to power n
  One approach is to mulitply a n-times => O(n)
  
  But we would use bit operations
  Since each num has log(n) bits then we could compute the ans in O(logn)

  Suppose we have to computer a^5
  Which is nothing but a^(101), 101 is binary representation of 5
  a^(101)=a^(4+0+1)=a^4 * a^1
  As in 101 left to right, 1=> a^4, 0=> a^2 and 1=>a^1
  So we multiply the corresponding powers where there is a set bit in n

  Ans=1, as power something would be 1 even if n=0
  So we fetch the lastBit from n
  If its zero we skip
  If its 1 we mupltiply it a
  Mupltiy the resultant with ans
  a becomes a times of a => a=a*a
  Repeat till n is not zero
*/

int main()
{
  int n;
  int p;
  cin >> n >> p;
  int ans = 1;
  while (p > 0)
  {
    if ((p & 1) == 1)
    {
      ans = ans * n;
    }
    n = n * n;
    p = p >> 1;
  }
  cout << ans;
  return 0;
}