#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int a[] = {1, 2, 3};
  int n = sizeof(a) / sizeof(a[0]);

  //next_permutation rearranges the elements such that it returns next lexicographically bigger arrangement
  //Thats if for [1,2,3] next lexicographically bigger arrangement is [1,3,2]
  //next_permuatation()  takes 2 arguments
  //1. Start of container
  //2. End of container
  //For each subsequent call it reaaranges elements
  //int i = 6;
  //while (i >= 1)
  //{
  next_permutation(a, a + n);
  for (auto x : a)
  {
    cout << x << " ";
  }
  cout << endl;
  //i--;
  //}

  vector<int> v{8, 9, 10};
  next_permutation(v.begin(), v.end());
  for (auto x : v)
  {
    cout << x << " ";
  }
  return 0;
}