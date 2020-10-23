#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v{1, 2, 3, 4, 5};

  //Iterate like an array
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  //Iterate using iterators
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  //For each
  for (auto x : v)
  {
    cout << x << " ";
  }
  return 0;
}