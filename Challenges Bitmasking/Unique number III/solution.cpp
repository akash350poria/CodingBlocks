#include <iostream>
using namespace std;

/*
Each number at max could have a 64 bits
We would create a array of 64 size where each element would store value of each bit

We would do the sum of all the elements 
1=001
1=001
1=001
2=010
2=010
2=010
3=011
s=044

Now each element in s would have value 3N+1 or 3N
Remainder of each element when divided by 3 would give unique number

ans=011 as, 0%3=0 and 4%3=1

To get the final ans in decimal convert this binary representation to decimal by muliplying each bit with its correspsonding power of 2

The same logic could be used for 4N,5N and so on..
*/

int main()
{
  int n;
  int num;
  int a[64] = {0};
  //0th bit would have value stored at 0th index
  int j = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    j = 0;
    //Extracting each bit and adding to sum array
    while (num > 0)
    {
      a[j++] = num & 1;
      num = num >> 1;
    }
  }
  int pow = 1;
  int ans = 0;
  for (int i = 0; i < 64; i++)
  {
    //Getting remainder
    a[i] = a[i] % 3;
    //Binary to decimal
    ans = ans + a[i] * pow;
    pow = pow * 2;
  }
  cout << ans;
  return 0;
}