#include <iostream>
using namespace std;

//Given an array where each element occurs twice except one element
//Find the element that occurs only once

// 5^5=0
// 5^0=5
// 5^7^5=7

int main()
{
  int a[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6};
  int n = sizeof(a) / sizeof(int);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans ^ a[i];
  }
  cout << ans;
  return 0;
}