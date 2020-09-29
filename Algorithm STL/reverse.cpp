#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  //reverse() funtion reverses the elements of a container
  //It could reverse the whole container or a part of container
  //reverse()  takes 2 arguments
  //1. Start index
  //2. End index

  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(a) / sizeof(a[0]);
  cout << "Container is: ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << ",";
  }
  cout << endl;
  cout << "Reverse whole container: ";
  reverse(a, a + n);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << ",";
  }

  cout << endl;
  cout << endl;
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "Container is: ";
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << ",";
  }
  cout << endl;
  cout << "Reverse a part of container: ";
  reverse(v.begin() + 2, v.end() - 2);
  for (auto x : v)
  {
    cout << x << ",";
  }
  return 0;
}