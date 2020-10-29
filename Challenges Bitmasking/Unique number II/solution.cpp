#include <iostream>
using namespace std;

/*Let the first unique num be 'x' and other be 'y' 
  Taking XOR of all elements who not give both the unique numbers, it would give x^y
  As all other elements would cancel out
  Let x=5 (101) and y=6 (110)
  result=x^y= 101^110=011
  Therefore x^y would have one set bit
  We would find the position of this set bit, say ith position
  Using this position we would find all the number which has set bit at that position
  We would have a list of nums say b[] which have ith position bit se
  Now XOR of all elements of b[] would give 'x'
  And XOR of 'x' with result would give 'y'

  a[]={1,1,2,2,5,3,3,6};
  result=5^6=x^y=010
  b[]={2,2,6}
  x=6;
  y=result^x=5
*/

int getSetBitPosition(int n)
{
  int pos = 0;
  while ((n & 1) != 1)
  {
    pos++;
    n = n >> 1;
  }
  return pos;
}

bool iBitSet(int n, int pos)
{
  int mask = 1 << pos;
  if ((mask & n) > 0)
  {
    return true;
  }
  return false;
}

int main()
{
  int n;
  int a[10000];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  //Take XOR of all inputs
  int result = 0;
  for (int i = 0; i < n; i++)
  {
    result = (result ^ a[i]);
  }

  //result=x^y;
  //Find the set bit
  int i = getSetBitPosition(result);
  //Find all elements with ith position as set
  //Take XOR of those elements, would give first unique num

  int x = 0;
  for (int j = 0; j < n; j++)
  {
    if (iBitSet(a[j], i))
    {
      x = (x ^ a[j]);
    }
  }

  //Get the next unique num
  //y=result^x
  int y = result ^ x;

  cout << min(x, y) << " " << max(x, y);
  return 0;
}