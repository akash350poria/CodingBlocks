#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  //next_permutation rearranges the elements such that it returns next lexicographically bigger arrangement
  //Thats if for [1,2,3] next lexicographically bigger arrangement is [1,3,2]
  //next_permuatation()  takes 2 arguments
  //1. Start of container
  //2. End of container
  //For each subsequent call it rearranges elements

  //To print all possible arrangements of a container run a loop till n!
  //where n=number of elements
  int a[] = {1, 2, 3};
  int n = sizeof(a) / sizeof(a[0]);
  next_permutation(a, a + n);
  for (auto x : a)
  {
    cout << x << " ";
  }
  cout << endl;

  vector<int> v{8, 9, 10};
  next_permutation(v.begin(), v.end());
  for (auto x : v)
  {
    cout << x << " ";
  }
  return 0;
}